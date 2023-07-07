#include "hash_tables.h"

/**
 * key_index - fun to compute index
 * @size: The size of the array
 * @key: key to compute index for
 * Return: index
 */
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int key_index = 0;

	key_index = hash_djb2(key);

	return (key_index % size);
}
