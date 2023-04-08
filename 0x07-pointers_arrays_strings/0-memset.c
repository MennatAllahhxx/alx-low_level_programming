#include "main.h"
/**
 * _memset - a fun
 * @s: 1st operator
 * @b: 2nd operator
 * @n: 3rd operator
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;
for (m = 0; m < n; m++)
{
*(s + m) = b;
}
return(s);
}
