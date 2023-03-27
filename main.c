#include "main.h"
#include <stdio.h>

/**
 * main - To test for _printf.
 *
 * Return: Nothing.
 */
int main(void)
{
        int len1, len2, len3, len4, len5, len6;

        len1 = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
        len3 = _printf("I am a string !\n");
        len4 = printf("I am a string !\n");
	len5 = _printf("Percent:[%%]\n");
        len6 = _printf("Unknown:[%r]\n");

	printf("%d, %d\n%d, %d\n%d, %d\n", len1, len2, len3, len4, len5, len6);
        return (0);
}
