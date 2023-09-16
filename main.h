#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

void check_format(char c, va_list args);
int _putchar(char c);
void _putint(int n);
void _putstr(char *str);
void _printf(char *format, ...);
void _vprintf(char *format, va_list args);

#endif
