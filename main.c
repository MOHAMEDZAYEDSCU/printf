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

    _printf("%+d\n", 1024);
    printf("%+d\n", 1024);

    _printf("%+d\n", -1024);
    printf("%+d\n", -1024);

    _printf("%+d\n", 0);
    printf("%+d\n", 0);

    _printf("%b\n",98);

    _printf("%S\n", "Best\nSchool");

    _printf("%r", "\nThis sentence is retrieved from va_args!");

    _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n"); 

    return (0);
}
