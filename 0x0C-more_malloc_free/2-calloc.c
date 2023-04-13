#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - a fun
 * @nmemb: par
 * @size: par
 * Return: NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i;
if (nmemb == 0 || size == 0)
	return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
	return (NULL);
for (i = 0; i < (size * nmemb); i++)
	a[i] = 0;
return (a);
}
