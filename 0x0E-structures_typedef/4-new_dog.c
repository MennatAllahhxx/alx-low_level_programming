#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - a fun
 * @name: op
 * @age: op
 * @owner: op
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dd;
int i;
dd = malloc(sizeof(dog_t));
if (dd == NULL)
	return (NULL);
dd->name = malloc(sizeof(name) + 1);
if (dd->name == NULL)
{
free(dd);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
	(*dd).name[i] = name[i];
(*dd).name[i] = '\0';
dd->owner = malloc(sizeof(owner) + 1);
if (dd->owner == NULL)
{
free(dd->name);
free(dd);
return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
	(*dd).owner[i] = owner[i];
(*dd).owner[i] = '\0';
dd->age = age;
return (dd);
}
