#include "main.h"

/**
 * main- this is main function
 *
 * Description: testing my printf.
 *
 * Return: no return for void function
 */

int main() {

    int len50;
    int len51;


    char c = 'A';
    int len1 = _printf("Character: [%c]\n", c);
    int len2 = printf("Character: [%c]\n", c);

    char special_char = '$';
    int len3 = _printf("Special Character: [%c]\n", special_char);
    int len4 = printf("Special Character: [%c]\n", special_char);

    char* str = "Hello, World!";
    int len5 = _printf("String: [%s]\n", str);
    int len6 = printf("String: [%s]\n", str);

    char* empty_str = "";
    int len7 = _printf("Empty String: [%s]\n", empty_str);
    int len8 = printf("Empty String: [%s]\n", empty_str);

    char* null_str = NULL;
    int len9 = _printf("Null String: [%s]\n", null_str);
    int len10 = printf("Null String: [%s]\n", null_str);

    char* long_str = "This is a very long string that should exceed the buffer size and be truncated...";
    int len11 = _printf("Long String: [%s]\n", long_str);
    int len12 = printf("Long String: [%s]\n", long_str);

    char c2 = 'X';
    char* str2 = "Concatenated";
    int len13 = _printf("Mixed: [%c] [%s]\n", c2, str2);
    int len14 = printf("Mixed: [%c] [%s]\n", c2, str2);

    char c3 = 'Z';
    char* str3 = "Length";
    int len15 = _printf("Modified Length: [%10c] [%20s]\n", c3, str3);
    int len16 = printf("Modified Length: [%10c] [%20s]\n", c3, str3);

    int len17 = _printf("Percentage: %%\n");
    int len18 = printf("Percentage: %%\n");

    int len19 = _printf("Escaped: \\n\n");
    int len20 = printf("Escaped: \\n\n");

    int len21 = _printf("Space: %c\n", ' ');
    int len22 = printf("Space: %c\n", ' ');

    int len23 = _printf("Tab:\tTab\n");
    int len24 = printf("Tab:\tTab\n");

    int len25 = _printf("Newline:\nNewline\n");
    int len26 = printf("Newline:\nNewline\n");

    int len27 = _printf("Carriage Return:\rCarriage Return\n");
    int len28 = printf("Carriage Return:\rCarriage Return\n");

    int len29 = _printf("Vertical Tab:\vVertical Tab\n");
    int len30 = printf("Vertical Tab:\vVertical Tab\n");

    int len31 = _printf("Form Feed:\fForm Feed\n");
    int len32 = printf("Form Feed:\fForm Feed\n");

    int len33 = _printf("Bell:\aBell\n");
    int len34 = printf("Bell:\aBell\n");

    int len35 = _printf("Backspace:\bBackspace\n");
    int len36 = printf("Backspace:\bBackspace\n");

    char non_null_terminated_str[] = {'N', 'u', 'l', 'l', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 't', 'e', 'd'};
    int len37 = _printf("Non-Null Terminated String: [%s]\n", non_null_terminated_str);
    int len38 = printf("Non-Null Terminated String: [%s]\n", non_null_terminated_str);

    int len39 = _printf("Large number of specifiers: %d %c %s %f %x %p %o\n", 42, 'A', "Hello", 3.14, 255, &len39, 63);
    int len40 = printf("Large number of specifiers: %d %c %s %f %x %p %o\n", 42, 'A', "Hello", 3.14, 255, &len40, 63);


    printf("Lengths from _printf:\n\n");

    printf("len1: %d\n", len1);
    printf("len2: %d\n\n", len2);

    printf("Lengths from _printf:\n");
    printf("len3: %d\n", len3);
    printf("len4: %d\n\n", len4);

    printf("Lengths from _printf:\n");
    printf("len5: %d\n", len5);
    printf("len6: %d\n\n", len6);

    printf("Lengths from _printf:\n");
    printf("len7: %d\n", len7);
    printf("len8: %d\n\n", len8);

    printf("Lengths from _printf:\n");
    printf("len9: %d\n", len9);
    printf("len10: %d\n\n", len10);

    printf("Lengths from _printf:\n");
    printf("len11: %d\n", len11);
    printf("len12: %d\n\n", len12);

    printf("Lengths from _printf:\n");
    printf("len13: %d\n", len13);
    printf("len14: %d\n\n", len14);

    printf("Lengths from _printf:\n");
    printf("len15: %d\n", len15);
    printf("len16: %d\n\n", len16);

    printf("Lengths from _printf:\n");
    printf("len17: %d\n", len17);
    printf("len18: %d\n\n", len18);

    printf("Lengths from _printf:\n");
    printf("len19: %d\n", len19);
    printf("len20: %d\n\n", len20);

    printf("Lengths from _printf:\n");
    printf("len21: %d\n", len21);
    printf("len22: %d\n\n", len22);

    printf("len23: %d\n", len23);
    printf("len24: %d\n\n", len24);

    printf("Lengths from _printf:\n");
    printf("len25: %d\n", len25);
    printf("len26: %d\n\n", len26);

    printf("Lengths from _printf:\n");
    printf("len27: %d\n", len27);
    printf("len28: %d\n\n", len28);

    printf("Lengths from _printf:\n");
    printf("len29: %d\n", len29);
    printf("len30: %d\n\n", len30);

    printf("Lengths from _printf:\n");
    printf("len31: %d\n", len31);
    printf("len32: %d\n\n", len32);

    printf("Lengths from _printf:\n");
    printf("len33: %d\n", len33);
    printf("len34: %d\n\n", len34);

    printf("Lengths from _printf:\n");
    printf("len35: %d\n", len35);
    printf("len36: %d\n\n", len36);

    printf("Lengths from _printf:\n");
    printf("len37: %d\n", len37);
    printf("len38: %d\n\n", len38);

    printf("Lengths from _printf:\n");
    printf("len39: %d\n", len39);
    printf("len40: %d\n\n", len40);


    len50 = _printf(" %%s\n","mozo");
    len51 = printf(" %%s\n","mozo");
    printf("%d\n", len50);
    printf("%d\n", len51);

    len50 = _printf(" %r\n");
    len51 = printf(" %r\n");
    printf("%d\n", len50);
    printf("%d\n\n", len51);

    len50 = _printf("%\0");
    len51 = printf("%\0");
    printf("%d", len50);
    printf("\n%d\n", len51);

    return 0;
}

