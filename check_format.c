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
    int tmp;
    switch (specifier)
    {
        case 'c':
            return (_putchar((char) va_arg(args, int)));
        case 's':
            return (_putstr(va_arg(args, char *)));
        case '%':
            return (_putchar('%'));
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
            return (putbin(va_arg(args, unsigned int)));
        case 'u':
            return (put_unsign(va_arg(args, unsigned int)));
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
            return (putstring_hexascii(va_arg(args, char *)));
        case 'p':
            return (putpointer_address(va_arg(args, void *)));
        case 'r':
            return putstring_reversed(va_arg(args, char *));
        case 'R':
            return putstring_rot13(va_arg(args, char *));
        default:
            len += _putchar('%') + _putchar(specifier);
            break;
    }
    return (len);
}
