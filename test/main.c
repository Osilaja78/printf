#include "main.h"
#include <stdio.h>

/**
 * main - To test for _printf.
 *
 * Return: Nothing.
 */
int main(void)
{
    int len, len1;

    len = _printf("Let's try out our own printf function!\n");
    len1 = printf("Let's try out our own printf function!\n");
    _printf("Length of string: %d, %d\n", len, len1);

    _printf("%s %s!\n", "Hello", "world");

    _printf("Printing decimal number: %d\n", 12345);
    /** _printf("Printing octal number: %o\n", 12345);
      * _printf("Printing hexadecimal number: %x\n", 12345);
      * _printf("Printing unsigned decimal number: %u\n", 12345);
      */

    _printf("Printing character: %c\n", 'H');

    _printf("Printing percent sign: %%\n");

    _printf("Printing binary representation of 11: %b\n", 11);

    return (0);
}
