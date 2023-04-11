#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid -  a fun
 * @width: w
 * @height: h
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **a;
if (width <= 0 || height <= 0)
	return (NULL);
a = malloc(height * sizeof(int *));
if (a == NULL)
{
free(a);
return (NULL);
}
for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(int));
if (a[i] ==  NULL)
{
for (j = 0; j <= i; j++)
	free(a[j]);
free(a);
return (NULL);
}
for (j = 0; j <width; j++)
	a[i][j] = 0;
}
return (a);
}
