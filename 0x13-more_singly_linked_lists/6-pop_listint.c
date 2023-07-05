#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - Deletes the head node
  * @head: Pointer to the first node
  *
  * Return: Integer
  */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	/* Checking if the list is empty */
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		/* Deleting and the head node and pointing to the next node as head node */
		node = *head;
		*head = node->next;
		num = node->n;
		free(node);
	}
	return (num);
}	
