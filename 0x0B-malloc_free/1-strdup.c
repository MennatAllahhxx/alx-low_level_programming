#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - a fun
 * @str: string
 * Return: NULL on false
 */
char *_strdup(char *str)
{
char *a;
int i = 0, j;
if (str == NULL)
	return (NULL);
while (str[i] != '\0')
	i++;
a = malloc(1 * (i + 1));
if (a == NULL)
	return (NULL);
for (j = 0; j < i; j++)
	a[j] = str[j];
return (a);
}
