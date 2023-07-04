#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_listint2 - Frees a listint_t list
  * @head: Pointer to the first node
  *
  * Return: Nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next_node;

	node = *head;
	while (node != NULL)
	{
		new_node = node->next;
		free(temp);
		node = next_node;
	}
	*head = NULL;
}
