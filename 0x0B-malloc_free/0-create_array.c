#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - a fun
 * @size: 1st para
 * @c: 2nd para
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
	return (NULL);
a = malloc(1 * size);
if (a == NULL)
	        return (NULL);
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
