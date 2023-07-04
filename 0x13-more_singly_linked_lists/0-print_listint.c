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
	int elements = 0;

	while (h != NULL)
	{
		/* Checking if the number element of h exists */
		if ((*h).n != 0)
		{
			printf("%d\n", h->n);
			h = h->next;
			elements++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (elements);
}
