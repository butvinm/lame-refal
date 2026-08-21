import fs from "node:fs";
import path from "node:path";
import { loadBytes } from "../runtime/lamehost.js";
import { canvasHost } from "../examples/canvas.js";

const FRAMES = 5;

function recordingContext(calls) {
    return new Proxy(
        {},
        {
            get: (target, name) =>
                target[name] ?? ((...args) => calls.push([name, ...args])),
            set: (target, name, value) => {
                calls.push([name, value]);
                target[name] = value;
                return true;
            },
        },
    );
}

async function smoke(wasmPath, args) {
    const calls = [];
    const output = [];
    const program = await loadBytes(fs.readFileSync(wasmPath), {
        hosts: [canvasHost(recordingContext(calls))],
        stdout: (line) => output.push(line),
        stderr: (line) => output.push(line),
    });

    for (let frame = 1; frame <= FRAMES; frame++) {
        const code = program.run(args(frame));
        if (code !== 0) {
            throw new Error(`${wasmPath}: frame ${frame} exited with ${code}`);
        }
    }

    return { calls, output, pages: program.pages };
}

const EXAMPLES = [
    {
        wasm: "examples/lgbtqia2s+/main.wasm",
        args: (frame) => [frame * 16],
        expect: (result) => result.calls.some(([name]) => name === "fillRect"),
    },
    {
        wasm: "examples/interpolation/main.wasm",
        args: (frame) => [frame, "-3.24;0.8\n1.5;3.47\n5.7;8.02\n"],
        expect: (result) => result.calls.some(([name]) => name === "arc"),
    },
];

let failed = 0;

for (const example of EXAMPLES) {
    const wasmPath = path.resolve(import.meta.dirname, "..", example.wasm);

    if (!fs.existsSync(wasmPath)) {
        console.log(`SKIP ${example.wasm} (not built)`);
        continue;
    }

    try {
        const result = await smoke(wasmPath, example.args);
        if (!example.expect(result)) {
            throw new Error("expected drawing calls were not made");
        }
        console.log(
            `OK   ${example.wasm}: ${FRAMES} frames, ${result.calls.length} canvas calls, ${result.pages} pages`,
        );
    } catch (error) {
        failed++;
        console.error(`FAIL ${example.wasm}: ${error.message}`);
    }
}

process.exit(failed === 0 ? 0 : 1);
