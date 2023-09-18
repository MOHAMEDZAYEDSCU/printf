#include "main.h"

/**
 * check_format - Checks the format specifier and performs appropriate action.
 *
 * @specifier: The format specifier character.
 * @args: The list of arguments to be formatted and printed.
 *
 * Return: The length of the formatted output.
 */
 int check_format(char specifier, va_list args, int flags)
{
    int len = 0;
    unsigned int tmp;

    switch (specifier)
    {
        case 'c':
            len += _putchar(va_arg(args, int));
            break;
        case 's':
            len += _putstr(va_arg(args, char *));
            break;
        case '%':
            len += _putchar('%');
            break;
        case 'd':
        case 'i':
            tmp = va_arg(args, int);
            if (flags & 1)
                len = handle_plus_flag(len, tmp);
            if (flags & 2)
                len = handle_space_flag(len, tmp);
            len += _putint(tmp);
            break;
        case 'b':
            len += putbin(va_arg(args, unsigned int));
            break;
        case 'u':
            len += put_unsign(va_arg(args, unsigned int));
            break;
        case 'o':
            tmp = va_arg(args, unsigned int);
            if (flags & 4)
                len = handle_hash_flag(len, specifier, tmp);
            len += putoctal(tmp);
            break;
        case 'x':
        case 'X':
            tmp = va_arg(args, unsigned int);
            if (flags & 4)
                len = handle_hash_flag(len, specifier, tmp);
            len += puthex(tmp, (specifier == 'X'));
            break;
        case 'S':
            len += putstring_hexascii(va_arg(args, char *));
            break;
        case 'p':
            len += putpointer_address(va_arg(args, void *));
            break;
        default:
            len += _putchar('%') + _putchar(specifier);
            break;
    }

    return len;
}
