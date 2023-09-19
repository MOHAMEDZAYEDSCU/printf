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
    if (str == NULL)
        _putstr("(null)", count);
    else
		while (*str)
		{
			_putchar(*str);
			str++;
            (*count)++;
		}
}
