/** Мелкие элементы управления, из которых примеры собирают свои панели. */

function make(tag, className, text) {
    const node = document.createElement(tag);
    if (className !== undefined) node.className = className;
    if (text !== undefined) node.textContent = text;
    return node;
}

export function button(label, onClick, { primary = false } = {}) {
    const node = make("button", primary ? "primary" : undefined, label);
    node.type = "button";
    node.addEventListener("click", onClick);
    return node;
}

/** Однострочное поле. Подпись невидима, её читает только программа чтения с экрана. */
export function line(label, { value = "", placeholder = "" } = {}) {
    const input = make("input", "line");
    Object.assign(input, { type: "text", value, placeholder, spellcheck: false });
    input.setAttribute("aria-label", label);
    return input;
}

/** Легенда графика: кружок цвета плюс подпись ряда. */
export function legend(items) {
    const list = make("ul", "legend");
    list.append(
        ...items.map(({ color, label }) => {
            const item = make("li");
            const swatch = make("span", "swatch");
            swatch.style.background = color;
            item.append(swatch, document.createTextNode(label));
            return item;
        }),
    );
    return list;
}
