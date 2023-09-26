#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - self referencial struct
 * for creating nodes for singly linked lists
 * @n: integer data
 * @next: self referencial pointer
 * pointer to the next node of a list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
