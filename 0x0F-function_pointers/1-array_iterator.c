#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a fun
 * @array: 1st op
 * @size: 2nd op
 * @action: ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
	action(array[i]);
}
