#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Prints all members of a dlistint_t
 * @h: head pointer
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("Nothing to print");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
