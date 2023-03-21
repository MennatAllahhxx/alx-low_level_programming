#include "main.h"
/**
 * print_sign - a function to print the sihn of a number
 * @n: a parameter
 * Return: 1 if positive. -1 if negative. 0 if zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 1)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
