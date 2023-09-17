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
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	i = _vprintf(format, args);

	va_end(args);
	return (i);
}
