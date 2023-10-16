#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


typedef struct format
{
	char *id;
	int (*f)();
} match;

int _strlen(char *str);
int _cstrlen(const char *str);
int print_37(void);
int printf_char(va_list val);
int printf_str(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int printf_int(va_list args);
int printf_dec(va_list args);
int print_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);

#endif
