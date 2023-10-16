#include "main.h"

/**
 * _printf - mimics printf
 * @format: identifier
 * Return: int
*/

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_str},
		{"%%", print_37}, {"%d", printf_dec}, {"%i", printf_int}, {"%b", print_bin},
		{"%u", printf_unsigned}, {"%o", print_oct},
		{"%x", printf_hex}, {"%X", printf_HEX}
	};
	va_list args;
	int i = 0;
	int len = 0;
	int j;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i])
	{
		j = 13;
		
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
