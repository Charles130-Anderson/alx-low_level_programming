#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index- Deletes the node at a given index .
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (current != NULL && i < index)
	{
		i++;
		current = current->next;
	}

	if (i < index)
		return (-1);

	if (i == index)
	{
		temp = current->next;
		if (current->prev != NULL)
			current->prev->next = temp;
		if (temp != NULL)
			temp->prev = current->prev;
		if (current == *head)
			*head = temp;
		free(current);
		return (1);
	}
	else
	{
		return (-1);
	}
}
