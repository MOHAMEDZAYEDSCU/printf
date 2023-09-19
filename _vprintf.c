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
    int flags;

    while (format[i])
    {
        current = format[i];
        next = format[i + 1];

        if (current == '%')
        {
            i++;
            flags = 0;

            while (next == '+' || next == ' ' || next == '#')
            {
                if (next == '+')
                    flags |= 1;

                if (next == ' ')
                    flags |= 2;

                if (next == '#')
                    flags |= 4;

                i++;
                next = format[i + 1];
            }

            len += check_format(next, args, flags);
        }
        else
        {
            len += _putchar(current);
        }
        i++;
    }

    return (len);
}
