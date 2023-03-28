#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned - prints an unsigned integer
 * @args: the va_list containing the argument to print
 *
 * Return: the updated count of characters printed
 */
int print_unsigned(va_list args)
{
	int chars_printed = 0;
	unsigned int n, div, digit;
	char c;

	n = va_arg(args, unsigned int);

	/* Handle 0 as a special case */
	if (n == 0)
	{
		_putchar('0');
		chars_printed++;
		return (chars_printed);
	}

	/* Calculate the number of digits in the integer */
	for (div = 1; n / div > 9; div *= 10)
		;

	/* Print the digits in the integer */
	while (div > 0)
	{
		digit = (n / div) % 10;
		c = digit + '0';
		_putchar(c);
		chars_printed++;
		div /= 10;
	}
	return (chars_printed);
}

/**
 * print_octal - prints an unsigned int in octal format
 * @args: list containing the unsigned int to print
 *
 * Return: updated count of printed characters
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int octal_num[100], i = 0;
	int chars_printed = 0;

	if (n == 0)
	{
		chars_printed += _putchar('0');
		return (chars_printed);
	}

	while (n != 0)
	{
		octal_num[i] = n % 8;
		n /= 8;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		chars_printed += _putchar(octal_num[i] + '0');
	}

	return (chars_printed);
}

/**
 * print_hexadecimal - prints an unsigned int in hexadecimal format
 * @args: the va_list containing the unsigned int to print
 *
 * Return: the updated count of characters printed
 */
int print_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *hex_digits = "0123456789abcdef";
	char hex_buffer[50];
	int i, hex_len = 0, chars_printed = 0;

	if (n == 0)
	{
		_putchar('0');
		chars_printed++;
		return (chars_printed);
	}

	while (n > 0)
	{
		hex_buffer[hex_len++] = hex_digits[n % 16];
		n /= 16;
		}

	for (i = hex_len - 1; i >= 0; i--)
	{
		chars_printed += _putchar(hex_buffer[i]);
	}

	return (chars_printed);
}

/**
 * print_hexadecimal_u - prints an unsigned int in hexadecimal format
 * @args: the va_list containing the unsigned int to print
 *
 * Return: the updated count of characters printed
 */
int print_hexadecimal_u(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *hex_digits = "0123456789ABCDEF";
	char hex_buffer[50];
	int i, hex_len = 0, chars_printed = 0;

	if (n == 0)
	{
		_putchar('0');
		chars_printed++;
		return (chars_printed);
	}

	while (n > 0)
	{
		hex_buffer[hex_len++] = hex_digits[n % 16];
		n /= 16;
	}

	for (i = hex_len - 1; i >= 0; i--)
	{
		chars_printed += _putchar(hex_buffer[i]);
	}

	return (chars_printed);
}
