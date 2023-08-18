#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *new_node;

	node = head;

	while (node != NULL)
	{
		new_node = node->next;
		free(node);
		node = new_node;
	}
}
