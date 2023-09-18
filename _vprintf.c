#include "main.h"

/**
 * vprintf - Prints formatted data to the standard output
 * @format: The format string containing the types and characters to print
 * @args: The list of arguments to be formatted and printed
 *
 * Return: The length of the formatted output
 */
int _vprintf(const char *format, va_list args)
{
	int len = 0;
	int i = 0;
	char next;
	char current;

	while (format[i])
	{
		current = format[i];
		next = format[i + 1];

		switch (current)
		{
			case '%':
				i++;
				len += check_format(next, args);
				break;

			default:
				len += _putchar(current);
				break;
		}

		i++;
	}

	return (len);
}

/**
 * check_format - Checks the format specifier and performs appropriate action
 * @specifier: The format specifier character
 * @args: The list of arguments to be formatted and printed
 *
 * Return: The length of the formatted output
 */
int check_format(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (_putchar((char)va_arg(args, int)));

		case 's':
			return (_putstr(va_arg(args, char *)));

		case '%':
			return (_putchar('%'));

		case 'd':
		case 'i':
			return (_putint(va_arg(args, int)));

		default:
			return (_putchar('%') + _putchar(specifier));
	}
}
