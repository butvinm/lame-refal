const PAGE_SIZE = 65536;

export class ExitSignal extends Error {
    constructor(code) {
        super(`Refal machine exited with code ${code}`);
        this.name = "ExitSignal";
        this.code = code;
    }
}

export class LameMemory {
    #instance = null;
    #encoder = new TextEncoder();
    #decoder = new TextDecoder();

    bind(instance) {
        this.#instance = instance;
    }

    get exports() {
        if (this.#instance === null) {
            throw new Error("LameMemory is used before the module is instantiated");
        }
        return this.#instance.exports;
    }

    get buffer() {
        return this.exports.memory.buffer;
    }

    get bytes() {
        return new Uint8Array(this.buffer);
    }

    get view() {
        return new DataView(this.buffer);
    }

    malloc(size) {
        const ptr = this.exports.malloc(size);
        if (ptr === 0) {
            throw new Error(`Out of memory: malloc(${size}) failed`);
        }
        return ptr;
    }

    readString(ptr, len) {
        return this.#decoder.decode(new Uint8Array(this.buffer, ptr, len));
    }

    readCString(ptr) {
        const bytes = this.bytes;
        let end = ptr;
        while (bytes[end] !== 0) {
            end++;
        }
        return this.#decoder.decode(bytes.subarray(ptr, end));
    }

    allocCString(str) {
        const encoded = this.#encoder.encode(str);
        const ptr = this.malloc(encoded.length + 1);
        const bytes = this.bytes;
        bytes.set(encoded, ptr);
        bytes[ptr + encoded.length] = 0;
        return ptr;
    }
}

function lineWriter(sink) {
    return (text) => {
        for (const line of text.split("\n")) {
            if (line !== "") {
                sink(line);
            }
        }
    };
}

function lameEnv(memory, { stdout, stderr, stdin }) {
    const streams = [
        null,
        lineWriter(stdout ?? ((line) => console.log(line))),
        lineWriter(stderr ?? ((line) => console.warn(line))),
    ];

    return {
        lame_write: (fd, ptr, len) => {
            const write = streams[fd] ?? streams[1];
            write(memory.readString(ptr, len));
        },
        lame_getc: () => (stdin ?? (() => -1))(),
        lame_now_ms: () => performance.now(),
        lame_time_s: () => Math.floor(Date.now() / 1000),
        lame_exit: (code) => {
            throw new ExitSignal(code);
        },
    };
}

export class LameProgram {
    #instance;
    #memory;
    #statics;

    constructor(instance, memory) {
        this.#instance = instance;
        this.#memory = memory;
        this.#statics = new Uint8Array(
            instance.exports.memory.buffer.slice(0, instance.exports.__heap_base.value),
        );
    }

    get memory() {
        return this.#memory;
    }

    get exports() {
        return this.#instance.exports;
    }

    get pages() {
        return this.#instance.exports.memory.buffer.byteLength / PAGE_SIZE;
    }

    reset() {
        this.#memory.bytes.set(this.#statics, 0);
    }

    run(args = []) {
        this.reset();

        const argv = this.#memory.malloc(4 * Math.max(args.length, 1));
        const pointers = args.map((arg) => this.#memory.allocCString(String(arg)));
        const view = this.#memory.view;
        pointers.forEach((ptr, i) => view.setUint32(argv + 4 * i, ptr, true));

        try {
            this.#instance.exports.main(args.length, argv);
        } catch (error) {
            if (error instanceof ExitSignal) {
                return error.code;
            }
            throw error;
        }

        return 0;
    }
}

export async function load(url, { hosts = [], stdout, stderr, stdin } = {}) {
    const memory = new LameMemory();
    const env = Object.assign(
        {},
        ...hosts.map((host) => host(memory)),
        lameEnv(memory, { stdout, stderr, stdin }),
    );

    const { instance } = await WebAssembly.instantiateStreaming(fetch(url), { env });
    memory.bind(instance);

    return new LameProgram(instance, memory);
}

export async function loadBytes(bytes, { hosts = [], stdout, stderr, stdin } = {}) {
    const memory = new LameMemory();
    const env = Object.assign(
        {},
        ...hosts.map((host) => host(memory)),
        lameEnv(memory, { stdout, stderr, stdin }),
    );

    const { instance } = await WebAssembly.instantiate(bytes, { env });
    memory.bind(instance);

    return new LameProgram(instance, memory);
}
