#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>

int check_format(char specifier, va_list args, int flags);
int _putchar(char c);
int  _putint(int n);
int _putstr(char *str);
int put_unsign(unsigned int n);
int putoctal(unsigned int n);
int puthex(unsigned int n, int uppercase);
int putbin(unsigned int n);
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int putstring_hexascii(char *str);
int putpointer_address(void *ptr);
int handle_plus_flag(int len, int num);
int handle_space_flag(int len, int num);
int handle_hash_flag(int len, char specifier, unsigned int num);

#endif
