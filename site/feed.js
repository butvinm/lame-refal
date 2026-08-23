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

/** Упрощённая подсветка Рефала: комментарии, литеры, директивы и вызовы. */
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

    const controls = document.createElement("div");
    controls.className = "controls";

    const demo = document.createElement("div");
    demo.className = "example__demo";
    demo.append(canvas, controls);

    const code = document.createElement("code");
    const listing = document.createElement("pre");
    listing.append(code);

    const summary = document.createElement("summary");
    summary.textContent = sourceNames(example).join(", ");

    const source = document.createElement("details");
    source.className = "source";
    source.append(summary, listing);

    section.append(heading, demo, source);
    return { section, canvas, controls, code };
}

function sourceNames(example) {
    return example.sources ?? ["main.ref"];
}

async function loadSource(example, code) {
    const names = sourceNames(example);
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
