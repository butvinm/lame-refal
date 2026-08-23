import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { initialGeneration } from "../../site/examples.js";
import { button, buttons, slider } from "../../site/controls.js";

const CELLS = 200;
const ROWS = 200;

export async function setup({ canvas, controls, token }) {
    const ctx = canvas.getContext("2d");

    let printed = "";
    const program = await load(new URL("./main.wasm", import.meta.url), {
        env: [canvasEnv(ctx)],
        stdout: (line) => {
            printed += line;
        },
    });

    let generation = initialGeneration(CELLS);
    let row = 0;
    let perFrame = 2;
    let paused = false;
    let frame = null;

    function stepOnce() {
        printed = "";
        const code = program.run([generation, String(row), token("--ink")]);
        if (code !== 0) {
            console.error(`Клеточный автомат: рефал-машина завершилась с кодом ${code}`);
            return false;
        }
        generation = printed;
        row += 1;
        return true;
    }

    function tick() {
        if (paused) return;

        for (let i = 0; i < perFrame && row < ROWS; i++) {
            if (!stepOnce()) return;
        }

        frame = row < ROWS ? window.requestAnimationFrame(tick) : null;
    }

    function restart() {
        if (frame !== null) window.cancelAnimationFrame(frame);
        generation = initialGeneration(CELLS);
        row = 0;
        paused = false;
        pause.textContent = "Пауза";
        ctx.fillStyle = token("--surface");
        ctx.fillRect(0, 0, canvas.width, canvas.height);
        frame = window.requestAnimationFrame(tick);
    }

    const pause = button("Пауза", () => {
        paused = !paused;
        pause.textContent = paused ? "Продолжить" : "Пауза";
        if (!paused) frame = window.requestAnimationFrame(tick);
    });

    const speed = slider("Строк за кадр", { min: 1, max: 8, value: perFrame }, (value) => {
        perFrame = value;
    });

    controls.append(
        buttons(button("Заново", restart, { primary: true }), pause),
        speed.element,
    );

    restart();
}
