#include "main.h"

/**
 * main - this is main function
 *
 * Return: nothing
 */
int main(void)
{
	_printf("this is my printf function");
	_printf("\n");
	_printf("\n");

	_printf("this is [%c, %i, %r, %s]\n", 'A', -99, "Mohamed%&$Zayed");
	_printf("this is \n\0[%c, %i, %r, %s]\n", 'A', -99, "Mohamed%&$Zayed");
}
