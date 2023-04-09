#include "main.h"
/**
 * is_prime_number - a fun
 * @n: number
 * Return: 1 if yes
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
else
	return (if_prime(n, 2));
}
/**
 * if_prime - a fun
 * @n: num
 * @i: operand
 * Return: result
 */
int if_prime(int n, int i)
{
if (i <= (n / 2))
{
if (n % i == 0)
	return (0);
else
	return (if_prime(n, i + 1));
}
return (1);
}
