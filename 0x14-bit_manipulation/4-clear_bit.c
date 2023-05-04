#include "main.h"
/**
 * clear_bit - a fun
 * @n: op
 * @index: op
 * Return: sth
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (!n || index > sizeof(unsigned long int) * 8)
	return (-1);
*n &= ~(1 << index);
return (1);
}
