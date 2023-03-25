#include "main.h"
/**
 * print_number - to print num
 * @n: number
 * Return: nth
 */
void print_number(int n)
{
unsigned int m;
if (n >= 0)
{
m = n;
}
else
{
m = -n;
_putchar('-');
}
if (m / 10)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}
