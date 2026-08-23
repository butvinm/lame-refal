import { load } from "../../runtime/lamehost.js";
import { canvasEnv } from "../canvas.js";
import { button } from "../../site/controls.js";

const CANVAS = 1000;
const MARGIN = 40;
const STEP = 10;
const MAX_DEPTH = 6;
const STEP_MS = 650;
const SPROUTS = 4;

/** Случайная последовательность правил, по одному для каждого уровня роста. */
function seed() {
    return Array.from({ length: MAX_DEPTH }, () =>
        Math.floor(Math.random() * SPROUTS),
    ).join("");
}

/**
 * Поверхность, которая ничего не рисует, а только запоминает габарит пути.
 * Рантайму всё равно, кому отдавать вызовы холста, поэтому измерить растение
 * можно тем же способом, каким его потом рисуют.
 */
function ruler() {
    let box = null;

    const note = (x, y) => {
        box =
            box === null
                ? { minX: x, maxX: x, minY: y, maxY: y }
                : {
                      minX: Math.min(box.minX, x),
                      maxX: Math.max(box.maxX, x),
                      minY: Math.min(box.minY, y),
                      maxY: Math.max(box.maxY, y),
                  };
    };

    return {
        surface: new Proxy(
            {},
            {
                get: (target, name) =>
                    name === "moveTo" || name === "lineTo" ? note : () => {},
                set: () => true,
            },
        ),
        measure: (run) => {
            box = null;
            run();
            return box;
        },
    };
}

export async function setup({ canvas, controls, token }) {
    const ctx = canvas.getContext("2d");
    const scout = ruler();

    const url = new URL("./main.wasm", import.meta.url);
    const measuring = await load(url, { env: [canvasEnv(scout.surface)] });
    const drawing = await load(url, { env: [canvasEnv(ctx)] });

    const args = (depth, digits) => [
        String(depth),
        String(STEP),
        digits,
        token("--bark"),
        token("--leaf"),
    ];

    /** Положение и масштаб, при которых растение помещается на холсте. */
    function fit(digits) {
        const box = scout.measure(() => measuring.run(args(MAX_DEPTH, digits)));
        if (box === null) return null;

        const width = Math.max(box.maxX - box.minX, 1);
        const height = Math.max(box.maxY - box.minY, 1);
        const room = CANVAS - 2 * MARGIN;
        const scale = Math.min(room / width, room / height);

        return {
            scale,
            x: (CANVAS - width * scale) / 2 - box.minX * scale,
            y: (CANVAS - height * scale) / 2 - box.minY * scale,
        };
    }

    function draw(depth, digits, place) {
        ctx.setTransform(1, 0, 0, 1, 0, 0);
        ctx.clearRect(0, 0, CANVAS, CANVAS);
        ctx.lineCap = "round";
        ctx.lineJoin = "round";
        ctx.setTransform(place.scale, 0, 0, place.scale, place.x, place.y);

        const code = drawing.run(args(depth, digits));
        ctx.setTransform(1, 0, 0, 1, 0, 0);

        if (code !== 0) {
            console.error(`L-система: рефал-машина завершилась с кодом ${code}`);
            return false;
        }

        return true;
    }

    const slowly = !window.matchMedia("(prefers-reduced-motion: reduce)").matches;
    let frame = null;

    /* Габариты вычисляются для взрослого растения, поэтому его основание не смещается. */
    function plant() {
        if (frame !== null) window.cancelAnimationFrame(frame);
        frame = null;

        const digits = seed();
        const place = fit(digits);
        if (place === null) return;

        if (!slowly) {
            draw(MAX_DEPTH, digits, place);
            return;
        }

        let depth = 1;
        let shown = null;
        if (!draw(depth, digits, place)) return;

        function tick(timestamp) {
            if (shown === null) shown = timestamp;

            if (timestamp - shown >= STEP_MS) {
                depth += 1;
                if (!draw(depth, digits, place)) return;
                shown = timestamp;

                if (depth === MAX_DEPTH) {
                    frame = null;
                    return;
                }
            }

            frame = window.requestAnimationFrame(tick);
        }

        frame = window.requestAnimationFrame(tick);
    }

    controls.append(button("Запустить", plant, { primary: true }));

    plant();
}
