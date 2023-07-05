#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - Inserts node at a given position
  * @head: Pointer to the first node
  * @idx: Position to insert the new node
  * @n: Data to insert
  *
  * Return: Pointer to new node or NULL if it fails
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node;
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (temp != NULL && count < idx - 1)
	{
		count++;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (*head);
}
