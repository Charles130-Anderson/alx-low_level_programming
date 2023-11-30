#include <stdlib.h>
#include <string.h>

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	/* Allocate memory for the hash table */
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	/* Allocate memory for the array */
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	/* Initialize the array to NULL */
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	/* Set the size of the hash table */
	new_hash_table->size = size;

	return (new_hash_table);
}
