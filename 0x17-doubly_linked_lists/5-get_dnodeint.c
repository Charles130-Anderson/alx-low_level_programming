#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node of the list, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}

	if (i == index)
		return (head);
	else
		return (NULL);
}
