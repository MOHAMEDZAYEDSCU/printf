#include "main.h"

/**
 * _putstr - for print strings
 *
 * @str: a pointer to a string
 * @count: pointer to the counter
 *
 * Return:no return for void function.
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
