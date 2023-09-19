#include "main.h"

/**
 * putstring_reversed - Prints a string in reverse order.
 *
 * @str: The string to print.
 *
 * Return: The length of the printed string.
 */
int putstring_reversed(char *str)
{
    int count = 0;
    int length;
    int i;
    if (!str)
        return _putstr("(null)");

    length = strlen(str);

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(str[i]);
        count++;
    }

    return count;
}

/**
 * putstring_rot13 - Prints a ROT13 encrypted string.
 *
 * @str: The string to encrypt and print.
 *
 * Return: The length of the printed string.
 */
int putstring_rot13(char *str)
{
    int count = 0;

    if (!str)
        return _putstr("(null)");

    while (*str)
    {
        char c = *str;

        if (c >= 'a' && c <= 'z')
        {
            c = ((c - 'a' + 13) % 26) + 'a';
            _putchar(c);
            count++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = ((c - 'A' + 13) % 26) + 'A';
            _putchar(c);
            count++;
        }
        else
        {
            _putchar(c);
            count++;
        }
        str++;
    }

    return count;
}
