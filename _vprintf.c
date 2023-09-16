#include "main.h"

/**
 * _vprintf - clone version of vprintf
 *
 * Description: This function check the format and choose the 
 * 		correct data type
 *
 * @format: a pointer to the text and format
 * @args: the arguments list
 *
 * Return: no return for void function.
 */
void _vprintf(char *format, va_list args)
{

	while (*format != '%' && *format != '\0')
	{
		_putchar(*format);
		format++;
	}
}
