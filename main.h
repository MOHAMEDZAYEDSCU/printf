#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

int _putchar(char c);
int print_string(char *str);
int print_number(int num);
int print_format(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
