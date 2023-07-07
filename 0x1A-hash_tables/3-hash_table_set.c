#include "hash_tables.h"

/**
 * hash_table_set - fun to set hash table
 * @ht: hash table
 * @key: key of the item
 * @value: value of hash item
 * Return: 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key,
		const char *value)
{
	hash_node_t *item, *curr;
	unsigned long int index = 0;

	item = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!item || !ht || !key || !(*key))
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);
	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index])
	{
		curr =  ht->array[index];

		while (curr != NULL)
		{
			if (!strcmp(curr->key, key))
			{
				strcpy(curr->key, key);
				free(item);
				return (1);
			}
			curr = curr->next;
		}
		item->next = ht->array[index];
	}

	else
		item->next = NULL;

	ht->array[index] = item;

	return (1);
}
