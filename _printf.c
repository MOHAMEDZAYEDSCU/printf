#include "main.h"
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list arg;

    va_start(arg, format);
    if (format == NULL)
        return (-1);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            count += conv(arg, format);
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }
    va_end(arg);
    return (count);
}
