/**
 * Список примеров: из него собираются карточки на корневой странице
 * и список случаев в tests/smoke.mjs.
 */

const CELLS = 200;

/** Начальное поколение клеточного автомата: одна живая клетка посередине. */
export function initialGeneration(cells = CELLS) {
    const middle = Math.floor(cells / 2);
    return Array.from({ length: cells }, (_, i) => (i === middle ? "1" : "0")).join("");
}

export const examples = [
    {
        slug: "cellular-automaton",
        title: "Клеточный автомат",
        summary: "Правило 110 записано таблицей предложений: восемь окрестностей, восемь строк кода.",
        shows: ["сопоставление с образцом", "argv и stdout", "canvas"],
        smoke: {
            args: (frame) => [initialGeneration(), String(frame), "rgb(21 23 27)"],
            expects: "fillRect",
        },
    },
    {
        slug: "l-system",
        title: "L-система",
        summary: "Кривая Гильберта: продукции переписывают строку, черепашка её читает и рисует.",
        shows: ["переписывание термов", "рекурсия по строке", "canvas"],
        smoke: {
            args: () => ["4", "62", "35", "965", "rgb(42 120 214)"],
            expects: "lineTo",
        },
    },
    {
        slug: "interpolation",
        title: "Интерполяция",
        summary: "Многочлен Лагранжа и ломаная по одним и тем же узлам, посчитанные в фиксированной точке.",
        shows: ["арифметика с фиксированной точкой", "разбор ввода", "canvas"],
        smoke: {
            args: (frame) => [
                String(frame),
                "-3.24;0.8\n1.5;3.47\n5.7;8.02\n",
                "rgb(21 23 27)",
                "rgb(42 120 214)",
                "rgb(235 104 52)",
            ],
            expects: "arc",
        },
    },
];

/** Ссылка на пример относительно корня сайта. */
export function exampleHref(example) {
    return `./examples/${encodeURIComponent(example.slug)}/`;
}
