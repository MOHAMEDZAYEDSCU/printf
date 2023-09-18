#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - prints data of various types on the standard output
 * @format: format string containing the types and characters to print
 * Return: the length of the formatted output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	int i = 0;
	char next;
	char current;
	char *str;
	char ch;
	int tmp;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		current = format[i];
		next = format[i + 1];

		switch (current)
		{
			case '%':
				i++;
				switch (next)
				{
					case 'c':
						ch = (char)va_arg(args, int);
						len += _putchar(ch);
						break;

					case 's':
						str = (char *)va_arg(args, char *);
						len += _putstr(str);
						break;

					case '%':
						len += _putchar('%');
						break;

					case 'd':
					case 'i':
						tmp = va_arg(args, int);
						len += _putint(tmp);
						break;

					default:
						len += _putchar(current);
						len += _putchar(next);
						break;
				}
				break;

			default:
				len += _putchar(current);
				break;
		}

		i++;
	}
	va_end(args);
	return (len);
}

