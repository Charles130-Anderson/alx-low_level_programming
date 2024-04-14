#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 * Return: Pointer to the first node where the value is
 * located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t jump, index;

	if (list == NULL || size == 0)
		return (NULL);

	current = list;
	jump = sqrt(size);

	while (current->next && current->n < value)
	{
		prev = current;
		index = current->index + jump;
		while (current->next && current->index < index)
		{
			prev = current;
			current = current->next;
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
