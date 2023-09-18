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
    _printf("%u\n", 1024); 
    printf("%u\n", 1024); 
    _printf("%o\n", 1024); 
    printf("%o\n", 1024); 
    _printf("%x\n", 1024); 
    printf("%x\n", 1024); 
    _printf("%X\n", 1024); 
    printf("%X\n", 1024); 
    return (0);
}
