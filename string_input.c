#include "main.h"
#include <unistd.h>

/**
 * _putstr - Prints a string on the standard output.
 * @string: The string to print.
 *
 * Return: The length of the string.
 */
int _putstr(char *string)
{
    char *s = string;
    int i = 0;

    if (!s)
        s = "(null)";

    while (s[i])
        _putchar(s[i++]);

    return (i);
}
