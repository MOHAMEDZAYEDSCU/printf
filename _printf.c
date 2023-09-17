#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format specifier string.
 * @...: Variable number of arguments to format and print.
 *
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++)
    {
        if (*ptr == '%')
        {
            ptr++;

            if (*ptr == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                count++;
            }
            else if (*ptr == 's')
            {
                char *str = va_arg(args, char *);
                for (int i = 0; str[i] != '\0'; i++)
                {
                    write(1, &str[i], 1);
                    count++;
                }
            }
            else if (*ptr == '%')
            {
                write(1, "%", 1);
                count++;
            }
            else if (*ptr == 'd' || *ptr == 'i')
            {
                int num = va_arg(args, int);
                char num_str[20];
                int len = sprintf(num_str, "%d", num);
                write(1, num_str, len);
                count += len;
            }
            else if (*ptr == 'b')
            {
                unsigned int num = va_arg(args, unsigned int);
                char binary_str[33];
                for (int i = 31; i >= 0; i--)
                {
                    binary_str[31 - i] = ((num >> i) & 1) ? '1' : '0';
                }
                binary_str[32] = '\0';
                write(1, binary_str, 32);
                count += 32;
            }
            else if (*ptr == 'u')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[20];
                int len = sprintf(num_str, "%u", num);
                write(1, num_str, len);
                count += len;
            }
            else if (*ptr == 'o')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[20];
                int len = sprintf(num_str, "%o", num);
                write(1, num_str, len);
                count += len;
            }
            else if (*ptr == 'x' || *ptr == 'X')
            {
                unsigned int num = va_arg(args, unsigned int);
                char num_str[20];
                int len;

                if (*ptr == 'x')
                    len = sprintf(num_str, "%x", num);
                else
                    len = sprintf(num_str, "%X", num);

                write(1, num_str, len);
                count += len;
            }
        }
        else
        {
            write(1, ptr, 1);
            count++;
        }
    }

    va_end(args);

    return count;
}
