#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * This function should free all memory associated with the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *next_node;

	/* If ht is NULL, don't do anything */
	if (ht == NULL)
		return;

	/* Free each node in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	}

	/* Free the hash table itself */
	free(ht->array);
	free(ht);
}
