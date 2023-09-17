#include "main.h"
#include <unistd.h>

/**
 * print_integer - Print an integer
 * @num: The integer to print
 */
void print_integer(int num)
{
    int count = 0;
    char buffer[12]; 

    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }

    snprintf(buffer, sizeof(buffer), "%d", num);
    count += string_print(buffer);
}
