#include "main.h"
/**
 * _strspn - a fun
 * @s: 1st operand
 * @accept: 2nd operator
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
for (i = 0; accept[i]; i++)
{
for (j = 0; s[j]; j++)
{
if (accept[i] == s[j])
{
count++;
break;
}
}
}
return (count);
}
