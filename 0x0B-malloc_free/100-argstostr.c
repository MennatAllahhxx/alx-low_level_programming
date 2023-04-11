#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - a fun
 * @ac: args count
 * @av: args value
 * Return: NULL on false
 */
char *argstostr(int ac, char **av)
{
char *a;
int i, j, k = 0, size = 0;
if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
	size++;
size++;
}
a = malloc(size + 1);
if (a == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
	a[k++] = av[i][j];
a[k++] = '\n';
}
a[k] = '\0';
return (a);
}
