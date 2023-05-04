#include "main.h"
/**
 * get_bit - a fun
 * @n: op
 * @index: op
 * Return: sth
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i;
if (index > sizeof(unsigned long int) * 8)
	return (-1);
i = ((1 << index) & n);
if (!i)
	return (0);
else
	return (1);
}
