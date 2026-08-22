/** Общая обвязка страницы примера: шапка, исходник, панель вывода. */

import { examples } from "./examples.js";

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

/**
 * Заполняет шапку страницы по манифесту и подтягивает исходники.
 * Возвращает описание примера.
 */
export async function mountChrome(slug, sources = ["main.ref"]) {
    const example = examples.find((item) => item.slug === slug);
    if (example === undefined) {
        throw new Error(`Пример "${slug}" не описан в site/examples.js`);
    }

    document.title = `${example.title} - Ущербный Рефал`;

    const heading = document.querySelector("[data-title]");
    if (heading !== null) heading.textContent = example.title;

    const summary = document.querySelector("[data-summary]");
    if (summary !== null) summary.textContent = example.summary;

    const sourceHost = document.querySelector("[data-source]");
    if (sourceHost !== null) {
        const texts = await Promise.all(
            sources.map(async (name) => {
                const response = await fetch(`./${name}`);
                const text = await response.text();
                return sources.length === 1 ? text : `* ${name}\n\n${text}`;
            }),
        );
        sourceHost.innerHTML = highlightRefal(texts.join("\n\n"));
    }

    return example;
}

/**
 * Панель вывода: возвращает потоки для load(), чтобы Prout и ошибки
 * попадали на страницу, а не только в консоль браузера.
 */
export function createConsole(element) {
    const write = (kind) => (line) => {
        const row = document.createElement("div");
        if (kind === "stderr") row.style.color = "var(--series-2)";
        row.textContent = line;
        element.append(row);
        element.scrollTop = element.scrollHeight;
    };

    return {
        stdout: write("stdout"),
        stderr: write("stderr"),
        clear: () => element.replaceChildren(),
    };
}
