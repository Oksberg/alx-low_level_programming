#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth nodeof a dlistint_t list
 * @head: Head pointer
 * @index: index of the node
 *
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->next = NULL;

	if (head == NULL)
		return (NULL);
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;

			if (count == index)
				break;
		}
	}
	return (temp);
}
