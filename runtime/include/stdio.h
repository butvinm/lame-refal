#ifndef LAME_STDIO_H_
#define LAME_STDIO_H_

#include <stddef.h>
#include <stdarg.h>

#define EOF (-1)
#define FILENAME_MAX 256

typedef struct lame_stream FILE;

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

FILE *fopen(const char *path, const char *mode);
int fclose(FILE *stream);
int fflush(FILE *stream);
int remove(const char *path);

int fgetc(FILE *stream);
int fputc(int c, FILE *stream);
int putc(int c, FILE *stream);

int fprintf(FILE *stream, const char *format, ...);
int vfprintf(FILE *stream, const char *format, va_list args);
int printf(const char *format, ...);
int sprintf(char *buffer, const char *format, ...);

#endif /* LAME_STDIO_H_ */
