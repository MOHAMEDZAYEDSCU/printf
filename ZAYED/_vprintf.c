#include "main.h"

/**
 * _vprintf - clone version of vprintf
 *
 * Description: This function print any text without arguments and pass
 *		the arguments if found
 *
 * @format: a pointer to the text and format
 * @args: the arguments list
 *
 * Return: no return for void function.
 */
int _vprintf(const char *format, va_list args)
{
	int count1 = 0, count2 = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			while (*format == ' ')
				format++;

			if (*format == '\0')
				return (count1 + count2);

			count2 += check_format(*format, args);
		}
		else
			_putchar(*format);

		format++;
		count1++;
	}
	return (count1 + count2);
}


/**
 * check_format - for checking format
 *
 * Description: this function check the format and choose the
 *		correct data type
 *
 * @c: character to the datatype
 * @args: list of arguments
 *
 * Return: no return for void function
 */
int check_format(char c, va_list args)
{
	int i = 0;

	switch (c)
	{
		case '%':
			_putchar('%');
			return (0);
		case 'c':
			_putchar(va_arg(args, int));
			return (0);
		case 'i':
		case 'd':
			_putint(va_arg(args, int));
			return (i);
		case 's':
			i = _putstr(va_arg(args, char*));
			return (i);
		default:
			_putchar('%');
			_putchar(c);
			return (1);
	}
}
