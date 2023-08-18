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
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (temp == NULL || new_node == NULL)
		return (NULL);

	temp->next = NULL;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
		return (NULL);
	if (*h != NULL)
	{
		temp = *h;
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;
			if (count == idx)
				new_node = temp->next;
		}
	}

	return (new_node);
}
