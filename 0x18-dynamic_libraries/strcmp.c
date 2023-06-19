#include "main.h"
/**
 * _strcmp - a fun to compare srings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: some value
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, k, m;
while (s1[i] != '\0' || s2[i] != '\0')
{
i++;
}
for (k = 0; k < i; k++)
{
if (s1[k] != s2[k])
{
m = s1[k] - s2[k];
return (m);
}
}
return (0);
}
