#include "main.h"

/**
 * _putstr - Prints a string to the standard output.
 *
 * @string: The string to print.
 *
 * Return: The length of the string.
 */
int _putstr(char *string)
{
    char *current_char = string;
    int length = 0;

    if (!current_char)
        current_char = "(null)";

    while (*current_char)
    {
        _putchar(*current_char);
        length++;
        current_char++;
    }

    return (length);
}
