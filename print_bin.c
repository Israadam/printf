#include "main.h"

/**
 * print_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int print_bin(va_list val)
{
int flag = 0;
int cont = 0;
int i, x = 1, y;
unsigned int num = va_arg(val, unsigned int);
unsigned int p;

for (i = 0; i < 32; i++)
{
p = ((x << (31 - i)) & num);
if (p >> (31 - i))
flag = 1;
if (flag)
{
y = p >> (31 - i);
_putchar(y + 48);
cont++;
}
}
if (cont == 0)
{
cont++;
_putchar('0');
}
return (cont);
}
