#include "lists.h"

/**
  * add_node - adds new nod of type list_t
  * @head: points to the firts node
  * @str: string to add to new node
  *
  * Return: address of the new node or NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *str_cpy;
	list_t *new_node;

	/* checkingif str is not NULL */
	if (str == NULL)
		return (NULL);

	/* counting the length of str */
	while (str[len] != '\0')
		len++;

	/* allocating memory to new_node */
	new_node = (list_t *)malloc(sizeof(list_t));
			if (new_node == NULL)
				return (NULL);

	/* making a copy of str and freeing if copying fails */
	str_cpy = strdup((str));
	if (str_cpy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* assigning values to new_node */
	new_node->str = str_cpy;
	new_node->len = len;
	new_node->next = *head;

	/* making new_node the first node by pointing head to it */
	*head = new_node;

	return (new_node);
}
