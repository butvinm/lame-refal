import fs from "node:fs";
import path from "node:path";
import { loadBytes } from "../runtime/lamehost.js";
import { canvasEnv } from "../examples/canvas.js";
import { examples } from "../site/examples.js";

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
        env: [canvasEnv(recordingContext(calls))],
        stdout: (line) => output.push(line),
        stderr: (line) => output.push(line),
    });

    for (let frame = 1; frame <= FRAMES; frame++) {
        const code = program.run(args(frame));
        if (code !== 0) {
            throw new Error(`кадр ${frame} завершился с кодом ${code}`);
        }
    }

    return { calls, output, pages: program.pages };
}

let failed = 0;

for (const example of examples) {
    const relative = path.join("examples", example.slug, "main.wasm");
    const wasmPath = path.resolve(import.meta.dirname, "..", relative);

    if (!fs.existsSync(wasmPath)) {
        console.log(`SKIP ${relative} (не собран)`);
        continue;
    }

    try {
        const result = await smoke(wasmPath, example.smoke.args);
        const expected = example.smoke.expects;
        if (!result.calls.some(([name]) => name === expected)) {
            throw new Error(`нет ни одного вызова ${expected}`);
        }
        console.log(
            `OK   ${relative}: ${FRAMES} кадров, ${result.calls.length} вызовов canvas, ${result.pages} страниц`,
        );
    } catch (error) {
        failed++;
        console.error(`FAIL ${relative}: ${error.message}`);
    }
}

process.exit(failed === 0 ? 0 : 1);
