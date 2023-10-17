#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *_printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
*/
void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
int i, printed = 0, printed_chars = 0;
int flags, width, precision, size, buff_ind = 0;
va_list list;
char buffer[BUFF_SIZE];
if (format == NULL)
return (-1);
va_start(list, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[buff_ind++] = format[i];
if (buff_ind == BUFF_SIZE)
print_buffer(buffer, &buff_ind);
/* write(1, &format[i], 1);*/
printed_chars++;
}
else
{
print_buffer(buffer, &buff_ind);
flags = get_flags(format, &i);
width = get_width(format, &i, list);
precision = get_precision(format, &i, list);
size = get_size(format, &i);
++i;
printed = handle_print(format, &i, list, buffer,
flags, width, precision, size);
if (printed == -1)
return (-1);
printed_chars += printed;
}
}
print_buffer(buffer, &buff_ind);
va_end(list);
return (printed_chars);
}
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
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
(
else
(
format++;
)
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
if (*buff_ind > 0)
write(1, &buffer[0], *buff_ind);
*buff_ind =(0);
}
