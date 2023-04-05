#include "lists.h"

/**
  * list_len - lists length of list_t
  * @h: points to first node of list_t
  *
  * Return: number of elements in list_t
  */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
