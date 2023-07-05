#include "lists.h"

/**
  * sum_listint - Sums the numbers in a listint_t list
  * @head: Pointer to the first node
  *
  * Return: The sum
  */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += (*temp).n;
		temp = temp->next;
	}
	return (sum);
	return (0);
}
