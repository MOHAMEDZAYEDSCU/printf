#include "main.h"

/**
 * check_format - Checks the format specifier and performs appropriate action.
 *
 * @specifier: The format specifier character.
 * @args: The list of arguments to be formatted and printed.
 *
 * Return: The length of the formatted output.
 */
int check_format(char specifier, va_list args)
{
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
            return (_putint(va_arg(args, int)));
        case 'b':
            return (putbin(va_arg(args, unsigned int)));
        case 'u':
            return (put_unsign(va_arg(args, unsigned int)));
        case 'o':
            return (putoctal(va_arg(args, unsigned int)));
        case 'x':
            return (puthex(va_arg(args, unsigned int), 0));
        case 'X':
            return (puthex(va_arg(args, unsigned int), 1));
        case 'S':
            return (putstring_hexascii(va_arg(args, char *)));
        case 'p':
            return (putpointer_address(va_arg(args, void *)));
	case 'r':
            return putstring_reversed(va_arg(args, char *));
	case 'R':
            return putstring_rot13(va_arg(args, char *));
        default:
            return (_putchar('%') + _putchar(specifier));
    }
}
