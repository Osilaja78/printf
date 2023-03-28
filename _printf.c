#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int (*get_specifier_func(char spec))(va_list);
int print_num(int num);
/**
 * _printf - Custom printf function.
 * @format: Character string to be printed.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	int (*converter_func)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}

		if (*format == '%')
		{
			/* get the function pointer for the conversion specifier */
			converter_func = get_specifier_func(*(++format));

			/* call the converter function with the current argument */
			if (converter_func == NULL)
			{
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;
			}
			else
				printed_chars += converter_func(args);
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}

/**
 * get_specifier_func - gets the function associated with a given specifier
 * @spec: the conversion specifier
 *
 * Return: the function pointer associated with the specifier,
 * or NULL if not found
 */
int (*get_specifier_func(char spec))(va_list)
{
	int i;
	fm_t converters[] = {
		{'c', print_char}, {'s', print_string},
		{'d', print_int}, {'i', print_int},
		{'%', print_percent}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal},
		{'x', print_hexadecimal}, {'X', print_hexadecimal_u},
		{'\0', NULL}
	};

	for (i = 0; converters[i].fn; i++)
	{
		if (converters[i].fmt == spec)
			return (converters[i].fn);
	}
	return (NULL);
}
