#include "search_algos.h"

/**
 * linear_search - a fun that searches for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be looked for
 * Return: the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
