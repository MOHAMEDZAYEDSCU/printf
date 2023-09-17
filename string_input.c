#include "main.h"

/**
 * _putstr - for print strings
 *
 * @str: a pointer to a string
 *
 * Return:no return for void function.
 */

int _putstr(char *str)
{
	int char_count = 0;

	if (str == NULL)
		_putstr("(null)");
	else
		while (*str)
		{
			putchar(*str);
			str++;
			char_count++;
		}

	return (char_count);
}
