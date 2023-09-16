#include "main.h"

/**
 * _printf - clone version of printf
 *
 * @format: a pointer to the format and text
 *
 * Return: no return for void function.
 */
void _printf(char *format, ...)
{
	va_list args;

	va_start(args, format);
	_vprintf(format, args);

	va_end(args);
}
