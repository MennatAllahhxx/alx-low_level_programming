#include "hash_tables.h"

/**
 * hash_table_print - fun to print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	char *separator;

	printf("{");
	separator = "";

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			printf("%s'%s': '%s'", separator,
					ht->array[index]->key,
					ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
			separator = ", ";
		}
	}

	printf("}\n");
}
