#include "main.h"
/**
 * _strpbrk - a fun
 * @s: 1st operand
 * @accept: 2nd operand
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *c;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
c = &s[i];
return (c);
}
}
}
return (0);
}
