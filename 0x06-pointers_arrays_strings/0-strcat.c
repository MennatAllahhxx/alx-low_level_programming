#include "main.h"
/**
 * *_strcat - a fun to concatenate
 * @dest: 1st operand
 * @src: 2nd operand
 * Return: dest
 */
char *_strcat(char *dest, char *src)
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
dest[k] = src[m];
m++;
}
dest[k] = '\0';
return (dest);
}
