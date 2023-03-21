#include "main.h"
/**
 * print_last_digit - a fun to print last digit
 * @i: input parameter
 * Return: last digit
 */
int print_last_digit(int i)
{
int s, p;
s = i % 10;
if (s >= 0)
	p = s;
else
	p = s * (-1);
_putchar('p');
return (p);
}
