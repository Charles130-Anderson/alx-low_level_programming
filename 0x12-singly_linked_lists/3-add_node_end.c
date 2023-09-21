#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Add a new node at the end of a list_t list
* @head: Pointer to the head of the list
* @str: String to be duplicated and stored in the new node
*
* Return: The address of the new element, or NULL if it failed
*
* Description:
* This function adds a new node at the end of a linked list. It takes a
* pointer to the head of the list and a string as parameters. The string is
* duplicated and stored in the new node. The function returns the address of
* the new element, or NULL if it fails to allocate memory or duplicate the
* string.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}

