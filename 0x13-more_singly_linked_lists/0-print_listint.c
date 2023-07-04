#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_listint - Prints all elements of a list
  * @h: The list to be printed
  *
  * Return: Number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
