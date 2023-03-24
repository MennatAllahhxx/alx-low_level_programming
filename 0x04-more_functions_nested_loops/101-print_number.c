#include "main.h"
/**
 * print_number - to print num
 * @n: number
 * Return: nth
 */
void print_number(int n)
{
int a, b, c, d, m;
if (n >= 0)
	m = n;
else
{
m = -n;
_putchar('-');
}
if (m > 999)
{
a = m / 1000;
b = (m % 1000) / 100;
c = (m % 100) / 10;
d = (m % 10);
_putchar(a + '0');
_putchar(b + '0');
_putchar(c + '0');
_putchar(d + '0');
}
else if (m > 99)
{
b = m / 100;
c = (m % 100) / 10;
d = (m % 10);
_putchar(b + '0');
_putchar(c + '0');
_putchar(d + '0');
}
else if (m > 9)
{
c = m / 10;
d = (m % 10);
_putchar(c + '0');
_putchar(d + '0');
}
else
	_putchar(m + '0');
}
