import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";

const CANVAS = 1000;
const MARGIN = 30;
const MAX_DEPTH = 6;
const STEP_MS = 700;
const HOLD_MS = 2400;

export async function setup({ canvas, token }) {
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
            return false;
        }

        return true;
    }

    /* Кому анимация мешает, тот сразу видит готовую кривую. */
    if (window.matchMedia("(prefers-reduced-motion: reduce)").matches) {
        draw(MAX_DEPTH);
        return;
    }

    let depth = 1;
    let shown = null;

    function tick(timestamp) {
        if (shown === null) shown = timestamp;

        const wait = depth === MAX_DEPTH ? HOLD_MS : STEP_MS;
        if (timestamp - shown >= wait) {
            depth = depth === MAX_DEPTH ? 1 : depth + 1;
            if (!draw(depth)) return;
            shown = timestamp;
        }

        window.requestAnimationFrame(tick);
    }

    if (draw(depth)) window.requestAnimationFrame(tick);
}
