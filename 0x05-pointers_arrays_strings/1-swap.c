#include "main.h"
/**
 * swap_int - a fun to do sth
 * @a: 1st operand
 * @b: 2nd operand
 * Return: nth
 */
void swap_int(int *a, int *b)
{
int m, n;
m = *a;
n = *b;
*a = n;
*b = m;
}
