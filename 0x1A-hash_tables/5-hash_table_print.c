#include "hash_tables.h"
/**
 * hash_table_print - Print the Hash table
 * @ht: The header of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int first = 0;
	unsigned long int i;
	hash_node_t *save;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			save = ht->array[i];
			if (first != 0)
				printf(", ");
			first = 1;
			printf("'%s': '%s'", save->key, save->value);
		}
	}
	printf("}\n");
}
