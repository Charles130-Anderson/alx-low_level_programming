#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Calculate the index at which the key/value pair should be stored */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the hash table */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* If the key is found, return the associated value */
			return (node->value);
		}
		node = node->next;
	}

	/* If the key is not found, return NULL */
	return (NULL);
}
