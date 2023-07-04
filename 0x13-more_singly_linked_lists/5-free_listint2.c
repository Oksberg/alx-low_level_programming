#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - Frees a listint_t list
  * @head: Pointer to the first node
  *
  * Return: Nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new_node;

	temp = *head;
	while (temp != NULL)
	{
		new_node = temp->next;
		free(temp);
		temp = new_node;
	}
	*head = NULL;
}
