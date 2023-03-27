#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdarg.h>

/**
 * struct fmt -  format construct.
 * @fmt: format
 * @fn: function
 *
 * Description: holds struct for functions
 */
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list args);
} fm_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

#endif
