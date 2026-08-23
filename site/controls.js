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

export function buttons(...nodes) {
    const row = make("div", "buttons");
    row.append(...nodes);
    return row;
}

/** Ползунок с подписью и текущим значением справа. */
export function slider(label, { min, max, step = 1, value }, onInput) {
    const control = make("div", "control");
    const input = make("input");
    Object.assign(input, { type: "range", min, max, step, value });

    const view = make("strong", "control__value", String(value));
    const row = make("div", "control__row");
    row.append(input, view);

    control.append(make("span", "label", label), row);

    input.addEventListener("input", () => {
        view.textContent = input.value;
        onInput(Number(input.value));
    });

    return { element: control, input };
}

/** Многострочное поле с подписью. */
export function field(label, { value = "", rows = 6 } = {}) {
    const control = make("div", "control");
    const input = make("textarea");
    Object.assign(input, { rows, value, spellcheck: false });

    control.append(make("span", "label", label), input);
    return { element: control, input };
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
