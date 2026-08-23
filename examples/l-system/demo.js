import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { slider } from "../../site/controls.js";

const CANVAS = 1000;
const MARGIN = 30;

export async function setup({ canvas, controls, token }) {
    const ctx = canvas.getContext("2d");

    const program = await load(new URL("./main.wasm", import.meta.url), {
        env: [canvasEnv(ctx)],
    });

    function draw(depth) {
        const side = 2 ** depth - 1;
        const step = Math.max(1, Math.floor((CANVAS - 2 * MARGIN) / side));
        const span = side * step;
        const startX = Math.round((CANVAS - span) / 2);
        const startY = startX + span;

        ctx.fillStyle = token("--surface");
        ctx.fillRect(0, 0, CANVAS, CANVAS);
        ctx.lineJoin = "round";
        ctx.lineCap = "round";

        const code = program.run([
            String(depth),
            String(step),
            String(startX),
            String(startY),
            token("--accent"),
        ]);

        if (code !== 0) {
            console.error(`L-система: рефал-машина завершилась с кодом ${code}`);
        }
    }

    const depth = slider("Итераций", { min: 1, max: 6, value: 4 }, draw);
    controls.append(depth.element);

    draw(Number(depth.input.value));
}
