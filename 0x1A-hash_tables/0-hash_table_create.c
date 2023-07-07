#include "hash_tables.h"

/**
 * hash_table_create - fun to create hash table
 * @size: The size of the array
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;
	unsigned long int i;

	tbl = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!tbl)
		return (NULL);
	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);

	if (!(tbl->array))
	{
		free(tbl);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tbl->array[i] = NULL;
	}

	return (tbl);
}
