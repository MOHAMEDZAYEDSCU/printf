#include "main.h"

/**
 * print_number - Print a number.
 * @num: Number to print.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int print_number(int num)
{
    char num_str[20];
    int len = sprintf(num_str, "%d", num);
    write(1, num_str, len);
    return len;
}
