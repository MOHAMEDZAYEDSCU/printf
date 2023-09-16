#include "main.h"

/**
 * _putstr - for print strings
 *
 * @str: a pointer to a string
 *
 * Return:no return for void function.
 */

void _putstr(char *str)
{
	if (str == NULL)
		_putstr("(null)");

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
