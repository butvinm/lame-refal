/**
 * Список примеров: из него собирается лента на странице
 * и список случаев в tests/smoke.mjs.
 */

const CELLS = 200;

export function initialGeneration(cells = CELLS) {
    const middle = Math.floor(cells / 2);
    return Array.from({ length: cells }, (_, i) => (i === middle ? "1" : "0")).join("");
}

export const examples = [
    {
        slug: "cellular-automaton",
        title: "Клеточный автомат",
        smoke: {
            args: (frame) => [initialGeneration(), String(frame), "rgb(21 23 27)"],
            expects: "fillRect",
        },
    },
    {
        slug: "l-system",
        title: "L-система",
        smoke: {
            args: () => ["6", "10", "012301", "rgb(107 74 42)", "rgb(92 122 47)"],
            expects: "lineTo",
        },
    },
    {
        slug: "interpolation",
        title: "Интерполяция",
        sources: ["main.ref", "Interpolation.ref"],
        smoke: {
            args: (frame) => [
                String(frame - 1),
                String(frame),
                "-3.24;0.8\n1.5;3.47\n5.7;8.02\n",
                "rgb(21 23 27)",
                "rgb(42 120 214)",
                "rgb(217 89 38)",
            ],
            expects: "lineTo",
        },
    },
];
