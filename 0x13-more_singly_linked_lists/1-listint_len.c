#include "lists.h"
#include <stdio.h>

/**
  * listint_len - Counts the length of the list
  * @h: The listint_t to traverse
  *
  * Return: Number of elements in a listint_t
  */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
