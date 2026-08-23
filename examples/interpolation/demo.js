import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { button, legend } from "../../site/controls.js";

/* Те же числа, что и в main.ref: центр холста и пикселей на единицу. */
const CENTER = 500;
const SCALE = 50;
const SWEEP_MS = 6000;
const LOWER = -10;
const UPPER = 10;

const DEFAULT_POINTS = ["-3.24;0.8", "-0.88;3.77", "1.5;3.47", "5.7;8.02", "7.52;9.75"];

const toCanvasX = (x) => CENTER + SCALE * x;
const toCanvasY = (y) => CENTER - SCALE * y;
const toDataX = (px) => (px - CENTER) / SCALE;
const toDataY = (py) => (CENTER - py) / SCALE;

export async function setup({ canvas, controls, token }) {
    const ctx = canvas.getContext("2d");

    const program = await load(new URL("./main.wasm", import.meta.url), {
        env: [canvasEnv(ctx)],
    });

    const limit = Math.floor(CENTER / SCALE);

    function drawGrid() {
        ctx.fillStyle = token("--surface");
        ctx.fillRect(0, 0, canvas.width, canvas.height);

        for (let n = -limit; n <= limit; n++) {
            const major = n % 5 === 0;
            ctx.strokeStyle = token("--rule");
            ctx.lineWidth = major ? 2 : 1;
            ctx.globalAlpha = major ? 1 : 0.55;

            ctx.beginPath();
            ctx.moveTo(toCanvasX(n), 0);
            ctx.lineTo(toCanvasX(n), canvas.height);
            ctx.moveTo(0, toCanvasY(n));
            ctx.lineTo(canvas.width, toCanvasY(n));
            ctx.stroke();
        }

        ctx.globalAlpha = 1;
        ctx.strokeStyle = token("--ink-faint");
        ctx.lineWidth = 2;
        ctx.beginPath();
        ctx.moveTo(0, toCanvasY(0));
        ctx.lineTo(canvas.width, toCanvasY(0));
        ctx.moveTo(toCanvasX(0), 0);
        ctx.lineTo(toCanvasX(0), canvas.height);
        ctx.stroke();

        /* Крайние подписи прижимаются внутрь, иначе половина уходит за холст. */
        ctx.fillStyle = token("--ink-faint");
        ctx.font = "22px 'IBM Plex Mono', monospace";
        for (let n = -limit; n <= limit; n += 5) {
            if (n === 0) continue;

            ctx.textBaseline = "top";
            ctx.textAlign = n === -limit ? "left" : n === limit ? "right" : "center";
            ctx.fillText(String(n), toCanvasX(n), toCanvasY(0) + 8);

            ctx.textAlign = "right";
            ctx.textBaseline = n === limit ? "top" : n === -limit ? "bottom" : "middle";
            ctx.fillText(String(n), toCanvasX(0) - 10, toCanvasY(n));
        }
    }

    let points = [...DEFAULT_POINTS];
    let running = false;
    let origin = 0;

    function frame(timestamp) {
        if (!running) return;

        const progress = (timestamp - origin) / SWEEP_MS;
        if (progress > 1) {
            running = false;
            return;
        }

        const code = program.run([
            (LOWER + progress * (UPPER - LOWER)).toFixed(3),
            points.join("\n"),
            token("--ink"),
            token("--series-1"),
            token("--series-2"),
        ]);

        if (code !== 0) {
            console.error(`Интерполяция: рефал-машина завершилась с кодом ${code}`);
            running = false;
            return;
        }

        window.requestAnimationFrame(frame);
    }

    function start() {
        drawGrid();
        if (points.length < 2) {
            running = false;
            return;
        }

        running = true;
        window.requestAnimationFrame((timestamp) => {
            origin = timestamp;
            window.requestAnimationFrame(frame);
        });
    }

    canvas.addEventListener("click", (event) => {
        const box = canvas.getBoundingClientRect();
        const x = toDataX(((event.clientX - box.left) / box.width) * canvas.width);
        const y = toDataY(((event.clientY - box.top) / box.height) * canvas.height);

        points = [...points, `${x.toFixed(2)};${y.toFixed(2)}`].sort(
            (one, other) => Number.parseFloat(one) - Number.parseFloat(other),
        );
        start();
    });

    controls.append(
        button("Запустить", start, { primary: true }),
        button("Очистить", () => {
            points = [];
            running = false;
            drawGrid();
        }),
        legend([
            { color: token("--ink"), label: "узлы" },
            { color: token("--series-1"), label: "многочлен Лагранжа" },
            { color: token("--series-2"), label: "ломаная" },
        ]),
    );

    start();
}
