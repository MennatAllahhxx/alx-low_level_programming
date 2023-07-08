#include "hash_tables.h"

/**
 * hash_table_get - fun to get a value
 * @ht: hash table
 * @key: key to be looked for
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !(*key) || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
