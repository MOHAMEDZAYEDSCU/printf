#include "main.h"

/**
 * putbin - Prints an unsigned int in binary
 * @n: The unsigned int to print in binary
 *
 * Return: The length of the binary representation
 */
int putbin(unsigned int n)
{
    int count = 0;
    int binary_digits[32];
    int i = 0;
    int j;

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    while (n > 0)
    {
        binary_digits[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        _putchar('0' + binary_digits[j]);
        count++;
    }

    return (count);
}
