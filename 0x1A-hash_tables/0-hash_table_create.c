#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table
 *
 * Return: The header of the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i;

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (head->array == NULL)
	{
		free(head);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		head->array[i] = NULL;
	return (head);
}
