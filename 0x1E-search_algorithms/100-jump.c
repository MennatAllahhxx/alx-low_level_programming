#include "search_algos.h"

/**
 * jump_search - a fun that searches for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be looked for
 * Return: the index
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (array == NULL)
		return (-1);

	start = 0, end = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	while ((array[end] < value) && (start < size) && (end <= size))
	{
		start = end;
		end += sqrt(size);

		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
