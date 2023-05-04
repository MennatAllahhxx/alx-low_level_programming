#include "main.h"
/**
 * flip_bits - a fun
 * @n: op
 * @m: op
 * Return: sth
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
unsigned long int x;
x = m ^ n;
while (x)
{
if (x & 1)
	i += 1;
x >>= 1;
}
return (i);
}
