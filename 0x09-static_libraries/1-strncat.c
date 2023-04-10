#include "main.h"
/**
 * *_strncat - a fun to concatenate
 * @dest: 1st operand
 * @src: 2nd operand
 * @n: 3rd operand
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k, m = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
for (k = i; k < (i + j); k++)
{
if (n != 0)
{
dest[k] = src[m];
n--;
}
m++;
}
dest[k] = '\0';
return (dest);
}
