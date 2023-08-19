#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Returns sum of all the data of a dlistint_t list
 * @head: Head pointer
 *
 * Return: Integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL || head == NULL)
		return (0);
	if (head != NULL)
	{
		temp = head;
		sum += temp;

		while (temp->next != NULL)
		{
			temp = temp->next;
			sum  += temp->n;
		}
	}

	return (sum);
}
