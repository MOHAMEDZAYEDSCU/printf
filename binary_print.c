#include "main.h"
#include <unistd.h>

/**
 * putbin - Prints an unsigned int in binary
 * @n: The unsigned int to print in binary
 *
 * Return: The length of the binary representation
 */
int putbin(unsigned int n)
{
    int len;

    if (n <= 1)
    {
        _putchar('0' + n);
        return 1;
    }

    len = putbin(n / 2);
    _putchar('0' + (n % 2));
    return (len + 1);
}
