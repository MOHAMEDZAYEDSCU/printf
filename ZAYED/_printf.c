#include "main.h"

/**
 * _printf - clone version of printf
 *
 * @format: a pointer to the format and text
 *
 * Return: 0 in successful
 *		-1 in failure.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int *ptr;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && !format[1]) ||
	(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	ptr = &i;
	_vprintf(format, args, ptr);

	va_end(args);
	return (i);
}
