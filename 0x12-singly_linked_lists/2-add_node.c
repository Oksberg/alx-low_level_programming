#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - Inserts a new node at the beginning
  * @head: Pointer to the first node
  * @str: String to copy
  *
  * Return: Pointer if successful, NULL if it fails
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
