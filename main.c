#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: nothing.
 */
int main(void)
{
	int len, len2;

	len = printf("This is a test string\n");
	len2 = _printf("This is a test string\n");

	printf("%d, %d\n", len, len2);
	return (0);
}
