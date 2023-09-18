#include "main.h"

/**
 * handle_plus_flag - Handles the + flag for non-custom conversion specifiers
 *
 * @len: The current length
 * @num: The integer to handle
 *
 * Return: The updated length after handling the + flag
 */
int handle_plus_flag(int len, int num)
{
    if (num >= 0)
        len += _putchar('+');
    return (len);
}

/**
 * handle_space_flag - Handles the space flag for non-custom conversion specifiers
 *
 * @len: The current length
 * @num: The integer to handle
 *
 * Return: The updated length after handling the space flag
 */
int handle_space_flag(int len, int num)
{
    if (num >= 0)
        len += _putchar(' ');
    return (len);
}

/**
 * handle_hash_flag - Handles the # flag for o, x, X specifiers
 *
 * @len: The current length
 * @specifier: The specifier character
 * @num: The integer to handle
 *
 * Return: The updated length after handling the # flag
 */
int handle_hash_flag(int len, char specifier, unsigned int num)
{
    if (num != 0)
    {
        if (specifier == 'o')
            len += _putchar('0');
        else if (specifier == 'x')
            len += _putstr("0x");
        else if (specifier == 'X')
            len += _putstr("0X");
    }
    return (len);
}
