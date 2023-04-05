#include "lists.h"

/**
  * print_list - prints elements of list_t
  * @h: temporal pointer for traversing list_t
  *
  * Return: number of elements in list_t
  *
  * Description: singly linked list node structure
  */

size_t print_list(const list_t *h)
{
	int elements = 0;

	/* traversing list_t */
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		elements++;
	}

	return (elements);
}
