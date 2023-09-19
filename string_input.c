#include "main.h"
#include <unistd.h>

/**
 * _putstr - Prints a string on the standard output.
 * @string: The string to print.
 * @count: pointer to the counter
 *
 * Return: The length of the string.
 */
void _putstr(char *str, int *count)
{
    char *s = string;
    int i = 0;

    if (!s)
        s = "(null)";

    while (s[i])
        _putchar(s[i++]);

    return (i);
}
