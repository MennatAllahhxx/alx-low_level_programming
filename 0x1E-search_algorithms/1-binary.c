#include "search_algos.h"

/**
 * binary_search - a fun that searches for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be looked for
 * Return: the index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return (-1);
}
