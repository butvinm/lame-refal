COMPILER := Refal-05-Standalone/bin/refal05c
RUNTIME := runtime/lamelibc.c runtime/lamewasm.h runtime/stb_sprintf.h $(wildcard runtime/include/*.h)
CANVAS := examples/canvas/Canvas.c examples/canvas/canvas.js

LGBT_DIR := examples/canvas/lgbtqia2s+
INTERPOLATION_DIR := examples/canvas/interpolation

EXAMPLES := $(LGBT_DIR)/main.wasm $(INTERPOLATION_DIR)/main.wasm


.PHONY: all
all: $(EXAMPLES)


$(COMPILER):
	$(MAKE) -C Refal-05-Standalone bin/refal05c


$(LGBT_DIR)/main.wasm: $(LGBT_DIR)/main.ref $(CANVAS) $(RUNTIME) $(COMPILER)
	./tools/build-wasm.sh $(LGBT_DIR) main Canvas


$(INTERPOLATION_DIR)/main.wasm: \
    $(INTERPOLATION_DIR)/main.ref \
    $(INTERPOLATION_DIR)/FPF.ref \
    $(INTERPOLATION_DIR)/Interpolation.ref \
    $(CANVAS) $(RUNTIME) $(COMPILER)
	./tools/build-wasm.sh $(INTERPOLATION_DIR) main FPF Interpolation Canvas LibraryEx


.PHONY: test
test: $(EXAMPLES)
	node tests/smoke.mjs


.PHONY: serve
serve: $(EXAMPLES)
	python3 -m http.server 8000


.PHONY: clean
clean:
	rm -f $(EXAMPLES) $(LGBT_DIR)/*.c $(INTERPOLATION_DIR)/*.c
