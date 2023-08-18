#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at given index
 * @head: Head pointer
 * @index: The given index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (count < index && temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
