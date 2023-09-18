#include "main.h"
/**
 * printBinary - changes an int to decimal
 * @num: the int
 * @length: the length
 *
 * Return: thr length
 */
int putbin(int num, int length)
{
	int x, a;

	if (num != 1)
	{
		x = (num % 2) == 0 ? num / 2 : (num - 1) / 2;
		length = putbin(x, ++length);
	}

	if (num == 1)
	{
		_putchar(num + '0');
		++length;
	} else
	{
		a = num - (2 * x);
		_putchar(a + '0');
	}
	return (length);
}
