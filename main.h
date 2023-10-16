#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int printf_int(va_list args);
int printf_dec(va_list args);
#endif
