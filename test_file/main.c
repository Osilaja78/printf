#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - To test for _printf.
 *
 * Return: Nothing.
 */
int main(void)
{
    int len, len1;
    unsigned int ui;

    len = _printf("Let's try out our own printf function!\n");
    len1 = printf("Let's try out our own printf function!\n");
    _printf("Length of string: %d, %d\n", len, len1);

    _printf("%s %s!\n", "Hello", "world");

    _printf("Printing decimal number: %d\n", 12345);
    _printf("Printing octal number: %o\n", 12345);
    _printf("Printing hexadecimal number: %x\n", 12345);
    ui = (unsigned int)INT_MAX + 1024;

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Octal:[%o]\n", ui);
    printf("Octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Printing character: %c\n", 'H');

    _printf("Printing percent sign: %%\n");

    _printf("Printing binary representation of 11: %b\n", 11);

    return (0);
}
