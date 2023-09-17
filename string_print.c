#include "main.h"

/**
 * print_string - Print a string.
 * @str: String to print.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int print_string(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        count++;
    }
    return count;
}
