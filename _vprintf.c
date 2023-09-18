#include "main.h"

/**
 * vprintf - Prints formatted data to the standard output
 *
 * @format: The format string containing the types and characters to print
 * @args: The list of arguments to be formatted and printed
 *
 * Return: The length of the formatted output
 */
int vprintf(const char *format, va_list args)
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
 *
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
			return (_putstr((va_arg(args, char *))));
		case '%':
			return (_putchar(('%')));
		case 'd':
		case 'i':
			return (_putint(va_arg(args, int)));
		case 'b':
			return (putbin(va_arg(args, unsigned int)));
		case 'u':
			return (put_unsign((va_arg(args, unsigned int))));
		case 'o':
			return (putoctal(va_arg(args, unsigned int)));
		case 'x':
			return (puthex(va_arg(args, unsigned int), 0));
		case 'X':
			return (puthex(va_arg(args, unsigned int), 1));
		case 'S':
			return (putstring_hexascii(va_arg(args, char *)));
		case 'p':
			return (putpointer_address(va_arg(args, void *)));
		default:
			return (_putchar('%') + _putchar(specifier));
	}
}
