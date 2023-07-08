#include "hash_tables.h"

/**
 * hash_table_delete - fun to delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (ht->array[index])
		{
			node = node->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = node;
		}
		free(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
