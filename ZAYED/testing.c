#include "main.h"

/**
 * main - this is main function
 *
 * Return: nothing
 */
int main(void)
{
int len;
int len2;
int x;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);

_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
x = _printf("[%c]\n", 65);
_printf("%  d\n",x);

_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

_printf(NULL);

_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");

_printf("\n");

x = _printf("%s\n", NULL);
_printf("%  d\n", x);

x = _printf("%s\n","mohamed");
_printf("%d\n", x);
printf("%d\n",x);

_printf("%\n");
printf("%\n");
return (0);
}
