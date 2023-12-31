#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts new node at a given position in the list
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	size_t i = 0;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	current = *h;
	while (current != NULL && i < idx - 1)
	{
		i++;
		current = current->next;
	}

	if (i == idx - 1)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->prev = current;
		new_node->next = current->next;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;

		return (new_node);
	}
	else
	{
		return (NULL);
	}
}
