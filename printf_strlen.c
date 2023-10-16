#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: string pointer
 * Return: 1
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
			return (i);
}

/**
 * _cstrlen - constsnt char pointer str
 * @str: char pointer
 * Return: i
*/

int _cstrlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
