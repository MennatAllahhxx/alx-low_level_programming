#include "main.h"
/**
 * _memcpy - a fun
 * @dest: 1st operator
 * @src: 2nd operator
 * @n: 3rd operator
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;
for (m = 0; m < n; m++)
{
*(dest + m) = *(src + m);
}
return (dest);
}
