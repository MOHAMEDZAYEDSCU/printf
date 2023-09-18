#include "main.h"

/**
* putbin - converts a dec to binary
* @n: the number bassed to us
*
* Description : does stuff. uses recursion
* Return: recursion
*/


int putbin(int n)
{
	int temp = n;
	int count = 0;
	int i;
	int count2 = 0;

	while (temp > 0)
	{
		temp /= 2;
		count++;
		count2++;
	}
	for (count -= 1; count >= 0; count--)
	{
		i = n >> count;

		if (i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	return (count2);
}
