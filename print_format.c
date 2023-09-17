#include "main.h"

/**
 * print_format - Print the formatted string.
 * @format: Format specifier string.
 * @args: Variable number of arguments to format and print.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int print_format(const char *format, va_list args)
{
    if (format == NULL)
        return -1;

    int count = 0;
    const char *ptr;

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%')
        {
            ptr++;

            if (*ptr == 'c')
                count += _putchar(va_arg(args, int));
            else if (*ptr == 's')
                count += print_string(va_arg(args, char *));
            else if (*ptr == '%')
            {
                _putchar('%');
                count++;
            }
            else if (*ptr == 'd' || *ptr == 'i')
                count += print_number(va_arg(args, int));
            else
            {
                _putchar(*ptr);
                count++;
            }
        }
        else
        {
            _putchar(*ptr);
            count++;
        }
    }

    return count;
}
