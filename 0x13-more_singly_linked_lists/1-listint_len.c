#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked lists
 * @h: This is the header pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counting;

	if (h == NULL)
	return (0);

	for (counting = 0; h != NULL; counting++)
	{

		h = h->next;
	}

	return (counting);
}

