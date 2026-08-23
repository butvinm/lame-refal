import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { button, buttons, field, legend, slider } from "../../site/controls.js";

/* Те же числа, что и в main.ref: центр холста и пикселей на единицу. */
const CENTER = 500;
const SCALE = 30;
const SWEEP_MS = 6000;

const DEFAULT_POINTS = ["-3.24;0.8", "-0.88;3.77", "1.5;3.47", "5.7;8.02", "7.52;9.75"].join("\n");

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

        ctx.fillStyle = token("--ink-faint");
        ctx.font = "22px 'IBM Plex Mono', monospace";
        for (let n = -15; n <= 15; n += 5) {
            if (n === 0) continue;

            ctx.textAlign = "center";
            ctx.textBaseline = "top";
            ctx.fillText(String(n), toCanvasX(n), toCanvasY(0) + 8);

            ctx.textAlign = "right";
            ctx.textBaseline = "middle";
            ctx.fillText(String(n), toCanvasX(0) - 10, toCanvasY(n));
        }
    }

    const points = field("Узлы", { value: DEFAULT_POINTS, rows: 6 });

    function readPoints() {
        return points.input.value
            .split("\n")
            .map((line) => line.trim())
            .filter((line) => line !== "");
    }

    let lower = -5;
    let upper = 10;
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
            (lower + progress * (upper - lower)).toFixed(3),
            readPoints().join("\n"),
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
        if (readPoints().length < 2) {
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

        const current = points.input.value.trim();
        const line = `${x.toFixed(2)};${y.toFixed(2)}`;
        points.input.value = current === "" ? line : `${current}\n${line}`;
        start();
    });

    controls.append(
        buttons(
            button("Построить", start, { primary: true }),
            button("Стоп", () => {
                running = false;
            }),
            button("Очистить", () => {
                points.input.value = "";
                running = false;
                drawGrid();
            }),
        ),
        points.element,
        slider("Левая граница", { min: -16, max: 0, step: 0.5, value: lower }, (value) => {
            lower = value;
        }).element,
        slider("Правая граница", { min: 0, max: 16, step: 0.5, value: upper }, (value) => {
            upper = value;
        }).element,
        legend([
            { color: token("--ink"), label: "узлы" },
            { color: token("--series-1"), label: "многочлен Лагранжа" },
            { color: token("--series-2"), label: "ломаная" },
        ]),
    );

    start();
}
