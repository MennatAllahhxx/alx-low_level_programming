#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - fun
 * @d: ptr
 * @name: 1st para
 * @age: 2nd para
 * @owner: 3rd para
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
d->name = name;
d->age = age;
d->owner = owner;
}
