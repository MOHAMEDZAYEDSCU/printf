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
    int length = 0;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%' && ptr[1] == '+')
        {
            ptr++;
            length += handle_plus_flag(0, va_arg(args, int));
        }
        else if (*ptr == '%')
        {
            length += check_format(ptr[1], args, 0);
            ptr++;
        }
        else
        {
            _putchar(*ptr);
            length++;
        }
    }

    va_end(args);

    return length;
}
