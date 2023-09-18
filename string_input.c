#include "main.h"

/**
 * _putstr - for print strings
 *
 * @str: a pointer to a string
 *
 * Return:no return for void function.
 */

int _putstr(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
