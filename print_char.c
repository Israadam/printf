#include "main.h"
/**
 * printf_char - function that print character
 * @val: argument
 * Return: 1
*/
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
