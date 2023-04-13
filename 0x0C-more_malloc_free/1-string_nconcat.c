#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - a fun
 * @s1: 1st para
 * @s2: 2nd para
 * @n: 3rd para
 * Return: NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int i = 0, j = 0, k, l;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;
if (n >= j)
	j = j;
else
	j = n;
a = malloc(1 * (i + j + 1));
if (a == NULL)
	return (NULL);
for (k = 0; k < i; k++)
	a[k] = s1[k];
for (l = 0; l < j; l++)
	a[i + l] = s2[l];
a[i + l] = '\0';
return (a);
}
