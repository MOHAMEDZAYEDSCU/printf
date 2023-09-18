#include "main.h"

/**
 * print_integer - Prints an integer to the standard output
 * @num: The integer to print
 *
 * Return: The number of digits in the integer
 */

int _putint(int num)
{
	unsigned int abs_num = (unsigned int)num;
	int digit_count = 0;

	if (!abs_num)
	{
		_putchar('0' + 0);
		return 1;
	}

	if (num < 0)
	{
		digit_count += _putchar('-');
		abs_num = (unsigned int)(-num);
	}

	if ((abs_num / 10) > 0)
	{
		print_integer((int)(abs_num / 10));
	}
	_putchar('0' + (abs_num % 10));

	while (num != 0)
	{
		num /= 10;
		digit_count++;
	}
	return (digit_count);
}
