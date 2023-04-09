#include "main.h"
/**
 * factorial - a fun
 * @n: number
 * Return: result
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
