#include "lists.h"
#include <stdio.h>

/**
  * print_list - Prints elements of a list
  * @h: Pointer ot the list
  *
  * Return: Integer
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;

	}
	return (count);
}
