#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    void *addr = (void *)0x7ffe637541f0;
    _printf("%p", addr); 
    return (0);
}
