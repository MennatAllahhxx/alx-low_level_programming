#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - a fun
 * @ptr: duhh
 * @old_size: duhh
 * @new_size: duhh
 * Return: a
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *a;
unsigned int i;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
	return (ptr);
if (ptr == NULL)
{
a = malloc(new_size);
if (a == NULL)
	return (NULL);
return (a);
}
a = malloc(new_size);
if (a == NULL)
	return (NULL);
for (i = 0; i < new_size && i < old_size; i++)
	((char *)a)[i] = ((char *)ptr)[i];
free(ptr);
return (a);
}
