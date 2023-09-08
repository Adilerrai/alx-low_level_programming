#include "hash_tables.h"
/**
 * hash_table_get - Get an element from the hash table
 * @ht: The header of the hash table
 * @key: The key to look for
 *
 * Return: The value of the required key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned const char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
