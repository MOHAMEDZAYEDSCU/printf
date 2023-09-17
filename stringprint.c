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

    if (s == NULL)
    {
        const char *null_message = "(null)";
        while (*null_message)
        {
            count += putchar(*null_message);
            null_message++;
        }
    }
    else
    {
        while (*s)
        {
            count += putchar(*s);
            s++;
        }
    }

    return count;
}

