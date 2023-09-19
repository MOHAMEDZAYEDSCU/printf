#include "main.h"

/**
 * putstring_hexascii - Prints a string, handling non-printable characters.
 *
 * @str: The string to print.
 *
 * Return: The length of the printed string.
 */
int putstring_hexascii(char *str)
{
    int count = 0;

    if (!str)
        return _putstr("(null)");

    while (*str)
    {
        char hex[3];  
        
        if (*str > 0 && (*str < 32 || *str >= 127))
        {
            _putchar('\\');
            _putchar('x');
            snprintf(hex, sizeof(hex), "%02X", (unsigned char)*str);
            _putstr(hex);
            count += 4;  
        }
        else
        {
            _putchar(*str);
            count++;
        }

        str++;
    }

    return count;
}
