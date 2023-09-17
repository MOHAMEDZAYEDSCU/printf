#include "main.h"
#include <unistd.h>

/**
 * conv - Handle format specifiers
 * @list: Argument list
 * @format: Format specifier
 *
 * Return: Number of characters printed
 */
int conv(va_list list, const char *format)
{
    char *str;
    int count = 0;

    if (*format == 's')
    {
        str = va_arg(list, char *);
        count += string_print(str);
    }
    else if (*format == 'c')
    {
        count += char_print(va_arg(list, int));
    }
    else if (*format == '%')
    {
        count += _putchar('%');
    }
    else if (*format == 'd' || *format == 'i')
    {
        int num = va_arg(list, int);
        print_number(num);
        count += string_print(NULL); 
    }
    return (count);
}
