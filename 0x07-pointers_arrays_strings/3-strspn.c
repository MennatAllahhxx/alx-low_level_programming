#include "main.h"
/**
 * _strspn - a fun
 * @s: 1st operand
 * @accept: 2nd operator
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, count = 1;
while (accept[i] != '\0')
{
j = 0;
while (s[j] != '\0')
{
if (accept[i] == s[j])
{
count++;
break;
}
j++;
}
i++;
}
return (count);
}
