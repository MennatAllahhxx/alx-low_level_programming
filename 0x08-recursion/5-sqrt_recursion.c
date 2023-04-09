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
{
int i;
for (i = 0; (i * i) <= n; i++)
{
if ((i * i) == n)
	return (i);
}
return (-1);
}
}
