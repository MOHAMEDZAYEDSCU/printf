#include "main.h"

/**
 * putpointer_address - Prints the address of a pointer in hexadecimal format
 * @ptr: Pointer whose address to print
 *
 * Description:
 * This function takes a pointer and prints its address in hexadecimal format.
 * It uses the sprintf function to format the address
 * and prints it using _putstr.
 *
 * Return:
 * The number of characters printed.
 */
int putpointer_address(void *ptr)
{

	char hex[17];

	sprintf(hex, "%p", ptr);

	return (_putstr(hex));

}
