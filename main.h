#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

int check_format(char c, va_list args);
int _putchar(char c);
int  _putint(int n);
int _putstr(char *str);
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);

#endif
