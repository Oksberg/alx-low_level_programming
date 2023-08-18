#include "lists.h"

/**
 * dlistint_len - Returns length of dlistint_t list
 * @h: Head pointer
 *
 * Return: Number of elements in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
