#include "main.h"

/**
 * vprintf - Prints formatted data to the standard output.
 * @format: The format string containing the types and characters to print.
 * @args: The list of arguments to be formatted and printed.
 *
 * Return: The length of the formatted output.
 */
int vprintf(const char *format, va_list args)
{
    int len = 0;
    int i = 0;
    char next;
    char current;

    while (format[i])
    {
        current = format[i];
        next = format[i + 1];

        switch (current)
        {
            case '%':
                i++;
                len += check_format(next, args);
                break;

            default:
                len += _putchar(current);
                break;
        }
        i++;
    }

    return (len);
}
