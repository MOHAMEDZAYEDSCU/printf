#include "main.h"

/**
 * putstring_hexascii - Prints a string with non-printable characters in hex.
 *
 * @str: The string to print.
 *
 * Return: The length of the formatted output.
 */
int putstring_hexascii(char *str)
{
    int len = 0;
    int i = 0;

    if (!str)
        return _putstr("(null)");

    while (str[i])
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            len += _putchar('\\');
            len += _putchar('x');
            len += puthex((unsigned int)str[i], 1);
        }
        else
        {
            len += _putchar(str[i]);
        }
        i++;
    }

    return len;
}
