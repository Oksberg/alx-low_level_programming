#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a new node at given index
 * @h: Head pointer
 * @idx: Given index
 * @n: Data for node
 *
 * Return: Pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	if (idx == 0)
	{
		new_node->next = temp;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL && count < idx)
	{
		count++;
		temp = temp->next;
	}
	if (count == idx)
	{
		new_node->next = temp;
		new_node->prev = temp->prev;
		if (temp->prev != NULL)
			temp->prev->next = new_node;
		temp->prev = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
