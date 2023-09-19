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
