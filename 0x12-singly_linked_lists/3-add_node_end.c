#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - Inserts node at the end
  * @head: Pointer to first node
  * @str:String to be copied
  *
  * Return: Pointer to the node, NULL if it fails
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	unsigned int len = 0;

	/* Allocating memory for new_node */

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Copying str int new_node->str and checking if successful */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(str);
	new_node->len = len;
	new_node->next = NULL;

	/* Checking if at end of list to insert new_node */
	if (*head == NULL)
	{
		*head = new_node;
	}
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
