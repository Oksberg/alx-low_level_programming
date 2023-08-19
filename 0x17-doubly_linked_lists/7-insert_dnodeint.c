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
		return (NULL);

	if (*h != NULL)
	{
		temp = *h;
		if (temp->next != NULL && idx == 0)
			new_node = temp->next;

		while (temp->next != NULL && count < idx)
		{
			count++;
			temp = temp->next;
		}
		if (count == idx)
			new_node = temp;
	}

	return (new_node);
}
