ifeq ($(origin CC),default)
CC := clang
endif

COMPILER := Refal-05-Standalone/bin/refal05c
RUNTIME := runtime/lamelibc.c runtime/lamewasm.h runtime/stb_sprintf.h $(wildcard runtime/include/*.h)
SHARED := $(wildcard examples/*.c) $(wildcard examples/*.js)

EXAMPLE_DIRS := $(patsubst %/,%,$(dir $(wildcard examples/*/main.ref)))
EXAMPLES := $(addsuffix /main.wasm,$(EXAMPLE_DIRS))


.PHONY: all
all: $(EXAMPLES)


$(COMPILER):
	R05CCOMP="$${R05CCOMP:-$(CC) -Wall -g}" $(MAKE) -C Refal-05-Standalone bin/refal05c


.SECONDEXPANSION:
$(EXAMPLES): %/main.wasm: $$(wildcard $$*/*.ref) $(SHARED) $(RUNTIME) $(COMPILER)
	SHARED_DIR=examples ./tools/build-wasm.sh $*


.PHONY: test
test: $(EXAMPLES)
	node tests/smoke.mjs


.PHONY: serve
serve: $(EXAMPLES)
	python3 -m http.server 8000


.PHONY: clean
clean:
	rm -f $(EXAMPLES) $(foreach dir,$(EXAMPLE_DIRS),$(dir)/*.c)
