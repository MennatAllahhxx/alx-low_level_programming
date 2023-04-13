#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - a fun
 * @min: 1st para
 * @max: 2nd para
 * Return: NULL on failure
 */
int *array_range(int min, int max)
{
int *a, i;
if (min > max)
	return (NULL);
a = malloc((max - min + 1) * sizeof(int));
if (a == NULL)
	return (NULL);
for (i = 0; i <= (max - min) ; i++)
	a[i] = min + i;
return (a);
}
