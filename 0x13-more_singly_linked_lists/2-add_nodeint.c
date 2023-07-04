#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint - Adds new node at the beginning
  * @head: Pointer to first node
  * @n: Number of nodes
  *
  * Return: Pointer to the new node or NULL if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
