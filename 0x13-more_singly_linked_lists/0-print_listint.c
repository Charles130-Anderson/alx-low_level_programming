#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t counting = 0;

	if (h == NULL)
		return (0);
	for (counting = 0; h != NULL; counting++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

return (counting);
}
