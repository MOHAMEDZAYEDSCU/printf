#include "main.h"

/**
 * _vprintf - clone version of vprintf
 *
 * Description: This function print any text without arguments and pass
 *		the arguments if found
 *
 * @format: a pointer to the text and format
 * @args: the arguments list
 * @counter: a pointer to the counter.
 *
 * Return: no return for void function.
 */
void _vprintf(const char *format, va_list args, int *counter)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			while (*format == ' ')
				format++;

			if (*format == '\0')
				return;

			check_format(*format, args, counter);
		}
		else
			_putchar(*format);

		format++;
		(*counter)++;
	}
	return;
}


/**
 * check_format - for checking format
 *
 * Description: this function check the format and choose the
 *		correct data type
 *
 * @c: character to the datatype
 * @args: list of arguments
 * @counter: pointer to the counter
 *
 * Return: no return for void function
 */
void check_format(char c, va_list args, int *counter)
{
	switch (c)
	{
		case '%':
			_putchar('%');
			break;
		case 'c':
			_putchar(va_arg(args, int));
			break;
		case 'i':
		case 'd':
			_putint(va_arg(args, int));
			break;
		case 's':
			_putstr(va_arg(args, char*), counter);
			break;

		default:
			{
				_putchar('%');
				_putchar(c);
				(*counter) += 1;
			}
	}
}
