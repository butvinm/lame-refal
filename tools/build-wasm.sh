#!/bin/bash
set -euo pipefail

if [ $# -lt 1 ]; then
  echo "Usage: tools/build-wasm.sh <каталог> [модуль]..." >&2
  echo "Без списка модулей берутся все *.ref из каталога, все *.c из SHARED_DIR и LibraryEx." >&2
  exit 2
fi

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PROJECT_DIR="$1"
shift

STANDALONE="$ROOT/Refal-05-Standalone"
FRAMEWORK="$STANDALONE/refal-5-framework"

if [ ! -e "$FRAMEWORK/lib/LibraryEx.ref" ]; then
  echo "Подмодули не развёрнуты. Выполните: git submodule update --init --recursive" >&2
  exit 1
fi

CC="${CC:-clang}"
WASM_CFLAGS="${WASM_CFLAGS:--Os}"
SHARED_DIR="${SHARED_DIR:-}"

if [ -n "$SHARED_DIR" ]; then
  SHARED_DIR="$(cd "$SHARED_DIR" && pwd)"
fi

REFAL05C="${REFAL05C:-$STANDALONE/bin/refal05c}"

if [ ! -x "$REFAL05C" ]; then
  echo "Собираю компилятор Рефала-05..."
  R05CCOMP="${R05CCOMP:-$CC -Wall -g}" make -C "$STANDALONE" bin/refal05c
fi

export R05PATH="$STANDALONE/lib:$FRAMEWORK/lib${SHARED_DIR:+:$SHARED_DIR}"
export R05CCOMP="$CC --target=wasm32 -ffreestanding -nostdlibinc -nostdlib \
  $WASM_CFLAGS \
  -I$ROOT/runtime/include -I$ROOT/runtime -I$STANDALONE/lib \
  $ROOT/runtime/lamelibc.c \
  -Wl,--no-entry \
  -Wl,--export=main \
  -Wl,--export=malloc \
  -Wl,--export=__heap_base \
  -o main.wasm"

cd "$PROJECT_DIR"

if [ $# -eq 0 ]; then
  shopt -s nullglob
  modules=()
  for source in *.ref; do
    modules+=("${source%.ref}")
  done
  if [ -n "$SHARED_DIR" ]; then
    for source in "$SHARED_DIR"/*.c; do
      source="${source##*/}"
      modules+=("${source%.c}")
    done
  fi
  modules+=(LibraryEx)
  set -- "${modules[@]}"
fi

"$REFAL05C" "$@" refal05rts refal05bif Go
