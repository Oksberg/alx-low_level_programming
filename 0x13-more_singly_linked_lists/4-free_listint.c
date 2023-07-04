#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Frees a listint_t
  * @head: Pointer to the first node
  *
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *new_node;

	node = head;
	while (node != NULL)
	{
		new_node = node->next;
		free(node);
		node = new_node;
	}
}
