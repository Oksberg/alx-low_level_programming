#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - Adds new node at the end of a listint_t
  * @head: Pointer to the first node
  * @n: Number
  *
  * Return: Pointer to new node or NULL if it fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
