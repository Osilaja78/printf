#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: the argument list containing the character to print
 *
 * Return: the number of characters printed
 */
int print_char(va_list args)
{
	int chars_printed = 0;
	int c = va_arg(args, int);

	_putchar(c);
	chars_printed++;
	return (chars_printed);
}

/**
 * print_string - prints a string
 * @args: the argument list containing the string to print
 *
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	int chars_printed = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		chars_printed++;
		s++;
	}
	return (chars_printed);
}

/**
 * print_int - prints an integer
 * @args: the argument list containing the integer to print
 *
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int chars_printed = 0;
	int n = va_arg(args, int);
	int i = 1, len = 0;

	if (n < 0)
	{
		_putchar('-');
		chars_printed++;
		n = -n;
	}

	while (n / i > 9)
		i *= 10;

	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		chars_printed++;
		len++;
		i /= 10;
	}
	return (chars_printed);
}

/**
 * print_percent - prints a percent symbol
 * @args: the argument list (unused)
 *
 * Return: the number of characters printed
 */
int print_percent(va_list args)
{
	int chars_printed = 0;

	UNUSED(args);
	_putchar('%');
	return (chars_printed + 1);
}
