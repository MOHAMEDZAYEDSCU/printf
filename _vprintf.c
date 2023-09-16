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
void _vprintf(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return;

			check_format(*format, args);
		}
		else
			_putchar(*format);

		format++;
	}
}


/**
 * check_format - for checking format
 *
 * Description: this function check the format and choose the
 *		correct data type
 *
 * @c: character to the datatype
 * @args: list of arguments
 * Return: no return for void function
 */
void check_format(char c, va_list args)
{
	switch (c)
	{
		case ' ':
			return;
		case 'c':
			_putchar(va_arg(args, int));
			break;
		case 'i':
		case 'd':
			_putint(va_arg(args, int));
			break;
		case 's':
			_putstr(va_arg(args, char*));
			break;
		default:
			_putchar('%');
			_putchar(c);
			break;
	}
}
