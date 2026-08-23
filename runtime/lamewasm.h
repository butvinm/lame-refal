#ifndef LAME_WASM_H_
#define LAME_WASM_H_

#define LAME_IMPORT(name) \
  __attribute__((import_module("env"), import_name(name)))

#endif /* LAME_WASM_H_ */
