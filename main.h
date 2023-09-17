#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int string_print(const char *s);
int char_print(char c);
int conv(va_list list, const char *format);

#endif
