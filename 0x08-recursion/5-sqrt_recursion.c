#include "main.h"
/**
 * _sqrt_recursion - a fun
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else
	return (calsqrt(n, 1));
}
/**
 * calsqrt - a fun
 * @n: operand
 * @i: operand
 * Return: result
 */
int calsqrt(int n, int i)
{
if (n == (i * i))
	return (i);
else if (n > (i * i))
	return (calsqrt(n, i + 1));
else
	return (-1);
}
