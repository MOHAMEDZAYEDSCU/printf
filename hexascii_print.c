#include "main.h"

/**
 * putstring_hexascii - Replaces special characters with their hex-ASCII values in a string
 * @str: The input string
 *
 * Description:
 * This function replaces special characters in the input string with their hex-ASCII
 * values (e.g., newline as \x0A). It prints the modified string on the standard output.
 *
 * Return:
 * The number of characters printed.
 */
int putstring_hexascii(char *str)
{
    int count = 0;
    char c;
    char hex[5];  
    int i;  

    if (!str)
        str = "(null)";

    while ((c = *str++))
    {
        if (c < 32 || c >= 127)
        {
            sprintf(hex, "\\x%02x", c);
            for (i = 0; hex[i]; i++)
            {
                _putchar(hex[i]);
                count++;
            }
        }
        else
        {
            _putchar(c);
            count++;
        }
    }

    return (count);
}
