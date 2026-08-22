# Ущербный Рефал

> Потому что Рефал без поддержки перфокарт - это ущербный Рефал.
>
> @Mazdaywik

Компиляция программ на [Refal-05](https://github.com/Mazdaywik/Refal-05) в WebAssembly и примеры браузерных приложений на нём - [GitHub Pages](https://butvinm.github.io/lame-refal/).

> ~~не повторяйте это дома~~ В связи с появлением [Refal-05-Standalone](https://github.com/butvinm/Refal-05-Standalone) и упрощением сборки, МинЗдрав одобрил сборку в домашних условиях без вреда психическому здоровью

## Как это устроено

Проект собирает сгенерированные [Refal-05](https://github.com/Mazdaywik/Refal-05) исходники на C в WebAssembly при помощи `clang`.

[JS-рантайм](./runtime/lamehost.js) оборачивает вызов Рефал-машины, восстанавливая состояние памяти перед каждым вызовом и передавая произвольные строковые аргументы в `argv`. Аргументы из `program.run([...])` видны в Рефале как `<Arg 0>`, `<Arg 1>` и так далее.

Для части системной библиотеки C реализована альтернатива для рантайма JS. Заголовки в [runtime/include](./runtime/include/) подменяют системные, а [runtime/lamelibc.c](./runtime/lamelibc.c) реализует объявленные в них функции, часть реализации вызывает функции из рантайма JS.

Куча растёт через `memory.grow`, а `free` ничего не делает: память освобождается целиком между вызовами Рефал-машины.

Файлов на диске нет, поэтому часть встроенных функций работает не так, как на обычной машине:

- аварийно завершают программу: `Open`, `Sysfun`, а также `Get` и `Put` с ненулевым номером файла
- всегда штатно завершаются с неудачей: `ExistFile` и `RemoveFile` возвращают `False`, `System` возвращает `-1`, `GetEnv` - пустую строку, `Close` молча ничего не делает
- `<Get 0>` и `<Card>` читают stdin и по умолчанию сразу получают EOF, `<Put 0>` пишет в stderr

### Сборка в WASM

Основная команда сборки:

```shell
clang --target=wasm32 -ffreestanding -nostdlibinc -nostdlib -Os \
  -Iruntime/include -Iruntime -IRefal-05-Standalone/lib \
  runtime/lamelibc.c \
  -Wl,--no-entry \
  -Wl,--export=main \
  -Wl,--export=malloc \
  -Wl,--export=__heap_base \
  -o main.wasm
```

- `-ffreestanding` - собирать без системной libc. Без него clang может заменить один вызов libc другим, например: `printf("hello\n")` превращается в `puts("hello")`, что делает невозможной замену только части системной библиотеки
- `-nostdlibinc` - не использовать системные заголовочные файлы, чтобы `#include <stdio.h>` из `refal05rts.c` включал `runtime/include`
- `-nostdlib` - не линковать системные библиотеки и объектные файлы с точкой входа `_start`
- `--no-entry` - не требовать точку входа, без флага будет ошибка: `entry symbol not defined (pass --no-entry to suppress): _start`
- `--export=main`, `--export=malloc`, `--export=__heap_base` - экспортируемые функции, вызываемые JS-рантаймом

## Сборка и запуск примеров

Нужны `make`, `clang` с `wasm-ld` и `node` для тестов.

```shell
git submodule update --init --recursive
make
make serve
```

Первый вызов `make` собирает компилятор Рефала-05 из [Refal-05-Standalone](https://github.com/butvinm/Refal-05-Standalone) и примеры, последующие вызовы перекомпилируют только примеры.

`make test` прогоняет примеры вхолостую под Node и проверяет, что Рефал-машина обрабатывает кадры без падений.

Можно использовать уже имеющийся компилятор, а не собирать из исходников, указав его в переменной окружения:

```shell
REFAL05C=/путь/к/refal05c make
```

## Добавление примера

```
examples/мой-пример/
  main.ref     ваш код
  index.html   страница, которая грузит main.wasm
```

`make` собирает все примеры автоматически. Чтобы пример попал на GitHub Pages, добавьте ссылку в корневой `index.html`.

## Сборка своего кода

```shell
/путь/к/lame-refal/tools/build-wasm.sh /путь/к/проекту
```

Соберёт все `*.ref` из каталога в `main.wasm` рядом с ними.

Подключение рантайма в HTML-странице:

```html
<script type="module">
  import { load } from "../../runtime/lamehost.js";

  const program = await load("./main.wasm");
  program.run(["42"]);
</script>
```

Аргументы вызова `run` передаются в `argv`, вывод идёт в консоль браузера, функция возвращает код возврата Рефал-машины. Вызывать `run` можно сколько угодно раз: состояние памяти сбрасывается перед каждым вызовом.

Функции, объявленные в вашем модуле на C, передаются через `env`:

```js
const program = await load("./main.wasm", { env: [canvasEnv(ctx)] });
```

## Кредитс

Идея и подход к компиляции под WASM вдохновлены [zozlib.js](https://github.com/tsoding/zozlib.js).

Проект использует реализацию функции `sprintf` из проекта [stb](https://github.com/nothings/stb).
