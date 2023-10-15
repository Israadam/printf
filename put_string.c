#include "main.h"

/**
 * _puts - prints a string eith new line
 * @str: strinjg
 *
 * Return: void
*/
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes character c
 * @c: character to print
 *
 * Return: on success 1.
 * on error -1
*/
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		if (c != BUF_FLUSH)
			buf[i++] = c;
		return (1);
	}
