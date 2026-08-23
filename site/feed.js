/** Лента примеров: заголовок, холст с управлением и текст программы. */

import { examples } from "./examples.js";

const rootStyle = getComputedStyle(document.documentElement);

/** Значение переменной оформления, чтобы примеры рисовали в цветах страницы. */
export const token = (name) => rootStyle.getPropertyValue(name).trim();

function escapeHtml(text) {
    return text
        .replaceAll("&", "&amp;")
        .replaceAll("<", "&lt;")
        .replaceAll(">", "&gt;");
}

const REFAL_TOKENS =
    /(\/\*[\s\S]*?\*\/|^\*.*$)|('(?:[^'\n])*')|(\$[A-Z]+)|(&lt;\s*[A-Za-z][\w-]*)/gm;

/** Грубая подсветка Рефала: комментарии, литеры, директивы, вызовы. */
function highlightRefal(source) {
    return escapeHtml(source).replace(
        REFAL_TOKENS,
        (match, comment, string, directive, call) => {
            if (comment !== undefined) return `<span class="tok-comment">${match}</span>`;
            if (string !== undefined) return `<span class="tok-string">${match}</span>`;
            if (directive !== undefined) return `<span class="tok-directive">${match}</span>`;
            if (call !== undefined) return `<span class="tok-call">${match}</span>`;
            return match;
        },
    );
}

function buildSection(example) {
    const section = document.createElement("section");
    section.className = "example";

    const heading = document.createElement("h2");
    heading.textContent = example.title;

    const canvas = document.createElement("canvas");
    canvas.width = 1000;
    canvas.height = 1000;
    canvas.setAttribute("role", "img");
    canvas.setAttribute("aria-label", example.title);

    const frame = document.createElement("div");
    frame.className = "canvas-frame";
    frame.append(canvas);

    const controls = document.createElement("div");
    controls.className = "controls";

    const demo = document.createElement("div");
    demo.className = "example__demo";
    demo.append(frame, controls);

    const code = document.createElement("code");
    const source = document.createElement("pre");
    source.className = "source";
    source.append(code);

    const body = document.createElement("div");
    body.className = "example__body";
    body.append(demo, source);

    section.append(heading, body);
    return { section, canvas, controls, code };
}

async function loadSource(example, code) {
    const names = example.sources ?? ["main.ref"];
    const texts = await Promise.all(
        names.map(async (name) => {
            const url = new URL(`../examples/${example.slug}/${name}`, import.meta.url);
            const response = await fetch(url);
            const text = await response.text();
            return names.length === 1 ? text : `* ${name}\n\n${text}`;
        }),
    );
    code.innerHTML = highlightRefal(texts.join("\n\n"));
}

export async function mountFeed(host) {
    for (const example of examples) {
        const { section, canvas, controls, code } = buildSection(example);
        host.append(section);

        const { setup } = await import(`../examples/${example.slug}/demo.js`);
        await Promise.all([setup({ canvas, controls, token }), loadSource(example, code)]);
    }
}
