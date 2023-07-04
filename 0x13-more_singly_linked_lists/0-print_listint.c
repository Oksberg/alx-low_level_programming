#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_listint - Prints all elements of a list
  * @h: The list to be printed
  *
  * Return: Number of elements printed
  */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		/* Checking if the number element of h exists */
		if ((*h).n != 0)
		{
			printf("%d\n", h->n);
		}
		elements++;
		/* Pointing to the next node */
		h = h->next;
	}
	return (elements);
}
