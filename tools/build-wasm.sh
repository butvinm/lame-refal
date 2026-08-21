#!/bin/bash
set -euo pipefail

if [ $# -lt 1 ]; then
  echo "Usage: tools/build-wasm.sh <example-dir> [module]..." >&2
  echo "Без списка модулей берутся все *.ref из каталога примера, общие *.c из examples и LibraryEx." >&2
  exit 2
fi

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
EXAMPLE_DIR="$1"
shift

STANDALONE="$ROOT/Refal-05-Standalone"
FRAMEWORK="$STANDALONE/refal-5-framework"

if [ ! -e "$FRAMEWORK/lib/LibraryEx.ref" ]; then
  echo "Подмодули не развёрнуты. Выполните: git submodule update --init --recursive" >&2
  exit 1
fi

CC="${CC:-clang}"
WASM_CFLAGS="${WASM_CFLAGS:--Os}"

REFAL05C="${REFAL05C:-$STANDALONE/bin/refal05c}"

if [ ! -x "$REFAL05C" ]; then
  echo "Собираю компилятор Рефала-05..."
  R05CCOMP="${R05CCOMP:-$CC -Wall -g}" make -C "$STANDALONE" bin/refal05c
fi

export R05PATH="$STANDALONE/lib:$FRAMEWORK/lib:$ROOT/examples"
export R05CCOMP="$CC --target=wasm32 -ffreestanding -nostdlibinc -nostdlib \
  $WASM_CFLAGS \
  -I$ROOT/runtime/include -I$ROOT/runtime -I$STANDALONE/lib \
  $ROOT/runtime/lamelibc.c \
  -Wl,--no-entry \
  -Wl,--export=main \
  -Wl,--export=malloc \
  -Wl,--export=__heap_base \
  -o main.wasm"

cd "$ROOT/$EXAMPLE_DIR"

if [ $# -eq 0 ]; then
  shopt -s nullglob
  modules=()
  for source in *.ref; do
    modules+=("${source%.ref}")
  done
  for source in "$ROOT"/examples/*.c; do
    source="${source##*/}"
    modules+=("${source%.c}")
  done
  modules+=(LibraryEx)
  set -- "${modules[@]}"
fi

"$REFAL05C" "$@" refal05rts refal05bif Go
