#include "main.h"
#include <unistd.h>

/**
 * string_print - Prints a string to standard output
 * @s: String to print
 *
 * Return: Number of characters printed
 */
int string_print(const char *s)
{
    int count = 0;

    while (*s)
    {
        count += _putchar(*s);
        s++;
    }
    return (count);
}
