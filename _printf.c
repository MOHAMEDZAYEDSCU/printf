#include "main.h"

/**
 * _printf - Prints formatted data to the standard output.
 *
 * @format: The format string containing the types and characters to print.
 *
 * Return: The length of the formatted output.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int length;

    if (format == NULL || (format[0] == '%' && !format[1]) ||
        (format[0] == '%' && format[1] == ' ' && !format[2]))
        return (-1);

    va_start(args, format);
    length = vprintf(format, args);
    va_end(args);

    return (length);
}
