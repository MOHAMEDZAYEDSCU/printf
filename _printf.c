#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format specifier string.
 * @...: Variable number of arguments to format and print.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count;

    va_start(args, format);
    count = print_format(format, args);
    va_end(args);

    return count;
}
