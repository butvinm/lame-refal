#ifndef LAME_STDLIB_H_
#define LAME_STDLIB_H_

#include <stddef.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

void *malloc(size_t size);
void *calloc(size_t count, size_t size);
void *realloc(void *ptr, size_t size);
void free(void *ptr);

void qsort(
  void *base, size_t count, size_t size,
  int (*compare)(const void *, const void *)
);

char *getenv(const char *name);
int system(const char *command);
int atexit(void (*handler)(void));

_Noreturn void exit(int code);
_Noreturn void abort(void);

#endif /* LAME_STDLIB_H_ */
