import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { button, line } from "../../site/controls.js";

const CELLS = 200;
const ROWS = 200;
const DEFAULT_SEED = "1";

/** Из затравки берутся только 0 и 1; результат обрезается и помещается в середину ленты. */
function tapeFromSeed(seed) {
    const cells = [...seed].filter((cell) => cell === "0" || cell === "1").join("");
    const body = (cells === "" ? DEFAULT_SEED : cells).slice(0, CELLS);
    const left = Math.floor((CELLS - body.length) / 2);
    return "0".repeat(left) + body + "0".repeat(CELLS - left - body.length);
}

export async function setup({ canvas, controls, token }) {
    const ctx = canvas.getContext("2d");

    let printed = "";
    const program = await load(new URL("./main.wasm", import.meta.url), {
        env: [canvasEnv(ctx)],
        stdout: (text) => {
            printed += text;
        },
    });

    let generation = tapeFromSeed(DEFAULT_SEED);
    let row = 0;
    let frame = null;

    function tick() {
        printed = "";
        const code = program.run([generation, String(row), token("--ink")]);
        if (code !== 0) {
            console.error(`Клеточный автомат: рефал-машина завершилась с кодом ${code}`);
            return;
        }

        generation = printed;
        row += 1;
        frame = row < ROWS ? window.requestAnimationFrame(tick) : null;
    }

    function start() {
        if (frame !== null) window.cancelAnimationFrame(frame);
        generation = tapeFromSeed(seed.value);
        row = 0;
        ctx.clearRect(0, 0, canvas.width, canvas.height);
        frame = window.requestAnimationFrame(tick);
    }

    const seed = line("Начальная лента", { value: DEFAULT_SEED, placeholder: "1101" });
    seed.addEventListener("keydown", (event) => {
        if (event.key === "Enter") start();
    });

    controls.append(seed, button("Запустить", start, { primary: true }));

    start();
}
