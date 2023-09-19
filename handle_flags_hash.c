#include "main.h"

/**
 * remove_last_character - Removes the last character from a string
 * @str: The string from which to remove the last character
 *
 * Returns: 0 on success, -1 if the string is NULL or empty
 */
int remove_last_character(char *str)
{
   
    int len;

    if (str == NULL || str[0] == '\0')
        return -1;

    len = strlen(str);
    if (len > 0)
        str[len - 1] = '\0';

    return 0;
}

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
    {
        len += _putchar('+');
        len += _putint(num);
    }
    else
    {
        len += _putint(num);
    }

    return len;
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
