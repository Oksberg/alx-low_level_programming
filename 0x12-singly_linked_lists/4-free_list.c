#include "lists.h"
#include <stdlib.h>

/**
  * free_list - Frees a list of type list_t
  * @head: Pointer to the first node
  *
  * Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *node;
	list_t *new_node;

	node = head;

	while (node != NULL)
	{
		new_node = node->next;
		free(node->str);
		free(node);
		node = new_node;
	}
}
