#include "lists.h"

/**
  * list_len - Counts the number of nodes
  * @h: The input structure
  *
  * Return: Number of nodes
  */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	temp = h;
	/* Counting the first node */
	while (temp != NULL)
	{
		count++;
		/* Traversing all other nodes */
		temp = temp->next;
	}
	return (count);
}
