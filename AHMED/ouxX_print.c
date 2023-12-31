#include "main.h"

/**
 * putunsigned - Prints an unsigned int in decimal
 * @n: The unsigned int to print in decimal
 *
 * Return: The length of the decimal representation
 */
int putunsigned(unsigned int n)
{
    int count = 0;
    int digit;
    int digits[32];  
    int i = 0;
    int j; 

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    while (n > 0)
    {
        digit = n % 10;
        digits[i] = digit;
        n = n / 10;
        i++;
    }

    for (j = i - 1; j >= 0; j--)  
    {
        _putchar('0' + digits[j]);
        count++;
    }
    return count;
}

/**
 * putoctal - Prints an unsigned int in octal
 * @n: The unsigned int to print in octal
 *
 * Return: The length of the octal representation
 */
int putoctal(unsigned int n)
{
    int count = 0;
    int octal_digits[32];
    int i = 0;
    int j;  
    int leading_zero;

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    while (n > 0)
    {
        octal_digits[i] = n % 8;
        n = n / 8;
        i++;
    }

    leading_zero = 1;  
    for (j = i - 1; j >= 0; j--)  
    {
        if (octal_digits[j] != 0)
            leading_zero = 0;

        if (!leading_zero)
        {
            _putchar('0' + octal_digits[j]);
            count++;
        }
    }
    return (count);
}



/**
 * puthex - Prints an unsigned int in hexadecimal
 * @n: The unsigned int to print in hexadecimal
 * @uppercase: Whether to use uppercase letters (1) or lowercase (0)
 *
 * Return: The length of the hexadecimal representation
 */
int puthex(unsigned int n, int uppercase)
{
    int count = 0;
    char hex_chars[] = "0123456789abcdef";
    int i;
    char hex_str[32];

    if (uppercase)
    {
        hex_chars[10] = 'A';
        hex_chars[11] = 'B';
        hex_chars[12] = 'C';
        hex_chars[13] = 'D';
        hex_chars[14] = 'E';
        hex_chars[15] = 'F';
    }

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    for (i = 0; i < 32 && n > 0; i++)
    {
        hex_str[i] = hex_chars[n % 16];
        n = n / 16;
     }

    for (i = i - 1; i >= 0; i--)
    {
        _putchar(hex_str[i]);
        count++;
    }

    return (count);
}
