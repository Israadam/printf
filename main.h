#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */




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
