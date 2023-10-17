#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *_printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
*/

int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list list;

	if (*format == NULL)
		return (-1);
	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
			write(1, format, 1);
		print_char++;
	}
	if
	{
	else
	{
		format++;
		if (*format == '\0')
			break;
		if (*format == '%')
		{
			write(1, format, 1);
			print_char++;
		}
		if (*format == 'c')
		{
			char c = va_arg(list, int);

			write(1, &c, 1);
			print_char++;
		}
		if (*format == 's')
		{
			char *str = va_arg(list, char*);
			int str_leng = 0;

			while (str[str_leng] != '\0')
				str_leng++;
			write(1, str, str_leng);
			print_char++;
		}

	}
	format++;
}
va_end(list);
return (print_char *);
