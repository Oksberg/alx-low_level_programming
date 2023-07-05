#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - Searches for a node and shows it
  * @head: Pointer to the first node
  * @index: Index of the node reached
  *
  * Return: Pointer to the node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

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
