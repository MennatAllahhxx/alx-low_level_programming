#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a fun
 * @name: 1st op
 * @f: ptr
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
	return;
f(name);
}
