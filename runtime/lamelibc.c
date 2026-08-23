#include <stddef.h>
#include <stdarg.h>

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "lamewasm.h"

#define STB_SPRINTF_IMPLEMENTATION
#include "stb_sprintf.h"

LAME_IMPORT("lame_write")  extern void lame_write(int fd, const char *bytes, int len);
LAME_IMPORT("lame_getc")   extern int lame_getc(int fd);
LAME_IMPORT("lame_now_ms") extern double lame_now_ms(void);
LAME_IMPORT("lame_time_s") extern long lame_time_s(void);
LAME_IMPORT("lame_exit")   extern _Noreturn void lame_exit(int code);

int errno = 0;

/* stdlib.h: память */

extern unsigned char __heap_base;

#define LAME_ALLOC_HEADER 16

static unsigned char *s_brk = 0;

static void *sbrk_aligned(size_t size) {
  unsigned char *block;
  size_t needed, available;

  if (s_brk == 0) {
    s_brk = &__heap_base;
  }

  size = (size + 15) & ~(size_t) 15;
  block = s_brk;
  needed = (size_t) (block + size);
  available = (size_t) __builtin_wasm_memory_size(0) * 65536u;

  if (needed > available) {
    size_t pages = (needed - available + 65535u) / 65536u;
    if (__builtin_wasm_memory_grow(0, pages) == (size_t) -1) {
      return NULL;
    }
  }

  s_brk = block + size;
  return block;
}

void *malloc(size_t size) {
  size_t *block = (size_t *) sbrk_aligned(size + LAME_ALLOC_HEADER);

  if (block == NULL) {
    return NULL;
  }

  block[0] = size;
  return (void *) ((unsigned char *) block + LAME_ALLOC_HEADER);
}

void free(void *ptr) {
  (void) ptr;
}

void *calloc(size_t count, size_t size) {
  void *block = malloc(count * size);

  if (block != NULL) {
    memset(block, 0, count * size);
  }

  return block;
}

void *realloc(void *ptr, size_t size) {
  size_t old_size;
  void *block;

  if (ptr == NULL) {
    return malloc(size);
  }

  old_size = ((size_t *) ((unsigned char *) ptr - LAME_ALLOC_HEADER))[0];
  block = malloc(size);

  if (block != NULL) {
    memcpy(block, ptr, old_size < size ? old_size : size);
  }

  return block;
}

/* string.h */

void *memcpy(void *dest, const void *src, size_t n) {
  unsigned char *d = dest;
  const unsigned char *s = src;

  while (n--) {
    *d++ = *s++;
  }

  return dest;
}

void *memmove(void *dest, const void *src, size_t n) {
  unsigned char *d = dest;
  const unsigned char *s = src;

  if (d < s) {
    while (n--) {
      *d++ = *s++;
    }
  } else {
    d += n;
    s += n;
    while (n--) {
      *--d = *--s;
    }
  }

  return dest;
}

void *memset(void *dest, int c, size_t n) {
  unsigned char *d = dest;

  while (n--) {
    *d++ = (unsigned char) c;
  }

  return dest;
}

int memcmp(const void *a, const void *b, size_t n) {
  const unsigned char *x = a;
  const unsigned char *y = b;

  while (n--) {
    if (*x != *y) {
      return *x - *y;
    }
    x++;
    y++;
  }

  return 0;
}

size_t strlen(const char *s) {
  const char *p = s;

  while (*p) {
    p++;
  }

  return (size_t) (p - s);
}

int strcmp(const char *a, const char *b) {
  while (*a && *a == *b) {
    a++;
    b++;
  }

  return *(const unsigned char *) a - *(const unsigned char *) b;
}

int strncmp(const char *a, const char *b, size_t n) {
  while (n && *a && *a == *b) {
    a++;
    b++;
    n--;
  }

  return n ? *(const unsigned char *) a - *(const unsigned char *) b : 0;
}

char *strcpy(char *dest, const char *src) {
  char *start = dest;

  while ((*dest++ = *src++) != '\0') {
    continue;
  }

  return start;
}

char *strncpy(char *dest, const char *src, size_t n) {
  size_t i = 0;

  for (; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }

  for (; i < n; i++) {
    dest[i] = '\0';
  }

  return dest;
}

char *strchr(const char *s, int c) {
  for (; *s != '\0'; s++) {
    if (*s == (char) c) {
      return (char *) s;
    }
  }

  return c == '\0' ? (char *) s : NULL;
}

char *strerror(int errnum) {
  (void) errnum;
  return "операция не поддерживается в WebAssembly";
}

/* ctype.h */

int isalpha(int c) { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }
int isdigit(int c) { return c >= '0' && c <= '9'; }
int isspace(int c) { return c == ' ' || (c >= '\t' && c <= '\r'); }
int isprint(int c) { return c >= 32 && c < 127; }
int isupper(int c) { return c >= 'A' && c <= 'Z'; }
int islower(int c) { return c >= 'a' && c <= 'z'; }
int toupper(int c) { return islower(c) ? c - ('a' - 'A') : c; }
int tolower(int c) { return isupper(c) ? c + ('a' - 'A') : c; }

/* stdio.h */

#define LAME_STREAM_BUFFER 1024

struct lame_stream {
  int fd;
  int len;
  char buffer[LAME_STREAM_BUFFER];
};

static struct lame_stream s_stdin = { 0, 0, { 0 } };
static struct lame_stream s_stdout = { 1, 0, { 0 } };
static struct lame_stream s_stderr = { 2, 0, { 0 } };

FILE *stdin = &s_stdin;
FILE *stdout = &s_stdout;
FILE *stderr = &s_stderr;

int fflush(FILE *stream) {
  if (stream == NULL) {
    fflush(stdout);
    fflush(stderr);
    return 0;
  }

  if (stream->len > 0) {
    lame_write(stream->fd, stream->buffer, stream->len);
    stream->len = 0;
  }

  return 0;
}

int fputc(int c, FILE *stream) {
  if (stream == NULL) {
    stream = stdout;
  }

  stream->buffer[stream->len++] = (char) c;

  if (c == '\n' || stream->len == LAME_STREAM_BUFFER) {
    fflush(stream);
  }

  return c;
}

int putc(int c, FILE *stream) {
  return fputc(c, stream);
}

static void write_bytes(FILE *stream, const char *bytes, int len) {
  int i;

  for (i = 0; i < len; i++) {
    fputc((unsigned char) bytes[i], stream);
  }
}

int vfprintf(FILE *stream, const char *format, va_list args) {
  char buffer[LAME_STREAM_BUFFER];
  int written = stbsp_vsnprintf(buffer, (int) sizeof buffer, format, args);

  write_bytes(
    stream, buffer,
    written < (int) sizeof buffer ? written : (int) sizeof buffer - 1
  );

  return written;
}

int fprintf(FILE *stream, const char *format, ...) {
  va_list args;
  int written;

  va_start(args, format);
  written = vfprintf(stream, format, args);
  va_end(args);

  return written;
}

int printf(const char *format, ...) {
  va_list args;
  int written;

  va_start(args, format);
  written = vfprintf(stdout, format, args);
  va_end(args);

  return written;
}

int sprintf(char *buffer, const char *format, ...) {
  va_list args;
  int written;

  va_start(args, format);
  written = stbsp_vsprintf(buffer, format, args);
  va_end(args);

  return written;
}

int fgetc(FILE *stream) {
  return lame_getc(stream == NULL ? 0 : stream->fd);
}

FILE *fopen(const char *path, const char *mode) {
  (void) path;
  (void) mode;
  errno = 1;
  return NULL;
}

int fclose(FILE *stream) {
  (void) stream;
  errno = 1;
  return EOF;
}

int remove(const char *path) {
  (void) path;
  errno = 1;
  return -1;
}

/* stdlib.h: процесс и окружение */

char *getenv(const char *name) {
  (void) name;
  return NULL;
}

int system(const char *command) {
  (void) command;
  return -1;
}

int atexit(void (*handler)(void)) {
  (void) handler;
  return 0;
}

_Noreturn void exit(int code) {
  fflush(stdout);
  fflush(stderr);
  lame_exit(code);
}

_Noreturn void abort(void) {
  fflush(stdout);
  fflush(stderr);
  lame_exit(134);
}

static void swap_bytes(unsigned char *a, unsigned char *b, size_t n) {
  while (n--) {
    unsigned char t = *a;
    *a++ = *b;
    *b++ = t;
  }
}

void qsort(
  void *base, size_t count, size_t size,
  int (*compare)(const void *, const void *)
) {
  unsigned char *items = base;
  size_t i, j;

  for (i = 1; i < count; i++) {
    for (j = i; j > 0 && compare(items + (j - 1) * size, items + j * size) > 0; j--) {
      swap_bytes(items + (j - 1) * size, items + j * size, size);
    }
  }
}

/* assert.h */

void lame_assert_fail(const char *expr, const char *file, int line) {
  fprintf(stderr, "%s:%d: не выполнено утверждение: %s\n", file, line, expr);
  abort();
}

/* time.h */

clock_t clock(void) {
  return (clock_t) lame_now_ms();
}

time_t time(time_t *timer) {
  time_t now = lame_time_s();

  if (timer != NULL) {
    *timer = now;
  }

  return now;
}

static const char *const s_weekdays[7] = {
  "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
};

static const char *const s_months[12] = {
  "Jan", "Feb", "Mar", "Apr", "May", "Jun",
  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

char *ctime(const time_t *timer) {
  static char buffer[26];

  long seconds = timer != NULL ? *timer : 0;
  long days = seconds / 86400;
  long rest = seconds % 86400;
  long z, era, doe, yoe, doy, mp, year;
  int weekday, month, day;

  if (rest < 0) {
    rest += 86400;
    days--;
  }

  weekday = (int) (((days % 7) + 11) % 7);

  z = days + 719468;
  era = (z >= 0 ? z : z - 146096) / 146097;
  doe = z - era * 146097;
  yoe = (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365;
  year = yoe + era * 400;
  doy = doe - (365 * yoe + yoe / 4 - yoe / 100);
  mp = (5 * doy + 2) / 153;
  day = (int) (doy - (153 * mp + 2) / 5 + 1);
  month = (int) (mp + (mp < 10 ? 3 : -9));

  if (month <= 2) {
    year++;
  }

  stbsp_snprintf(
    buffer, (int) sizeof buffer, "%s %s %2d %02d:%02d:%02d %ld\n",
    s_weekdays[weekday], s_months[month - 1], day,
    (int) (rest / 3600), (int) (rest / 60 % 60), (int) (rest % 60), year
  );

  return buffer;
}
