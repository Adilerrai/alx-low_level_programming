#include "hash_tables.h"
/**
 * hash_table_set - Add a new element to the hash table
 * @ht: The header of the hash table
 * @key: The key of the added element
 * @value: The value of the added element
 *
 * Return: 0 on failure and 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *buff;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned const char *)key, ht->size);
	buff = ht->array[index];
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (buff == NULL)
		ht->array[index] = new;
	else
	{
		new->next = buff;
		ht->array[index] = new;
	}
	return (1);
}
