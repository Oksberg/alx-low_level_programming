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
	dlistint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);
	if (head != NULL && index == 0)
		return (temp);
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}

	return (NULL);
}
