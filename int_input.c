#include "main.h"

/**
 * _putint - to print integers
 *
 * @n: the number needed to be printed
 *
 * Return: no return for void function
 */
void _putint(int n)
{
	char buffer[12];
	int i = 0, j;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
