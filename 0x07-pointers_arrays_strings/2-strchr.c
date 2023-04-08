#include "main.h"
/**
 * _strchr - a fun
 * @s: 1st operator
 * @c: 2nd operator
 * Return: either pointer or null
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (0);
}
