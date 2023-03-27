#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int print_num(int num);
/**
 * _printf - Custom printf function.
 * @format: Character string to be printed.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int d, i, len = 0;
	char c, *s;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			format++;
			len++;
		}

		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					c = (char) va_arg(args, int);
					_putchar(c);
					len++;
					break;
				case 's':
					s = va_arg(args, char *);

					if (s == NULL)
						s = "(null)";

					while (*s != '\0')
					{
						_putchar(*s);
						len++;
						s++;
					}
					break;
				case '%':
					_putchar('%');
					len++;
					break;
				case 'd':
					d = va_arg(args, int);
					len += print_num(d);
					break;
				case 'i':
					i = va_arg(args, int);
					len += print_num(i);
					break;
			}
			format++;
		}
	}
	va_end(args);
	return (len);
}

/**
 * print_num - for format specifiers %d and %i.
 * @num: number to print
 *
 * Return: length of printed number.
 */
int print_num(int num)
{
	int len = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}

	if (num > 9)
	{
		print_num(num / 10);
		len++;
	}
	_putchar(num % 10 + '0');
	len++;
	return (len);
}
