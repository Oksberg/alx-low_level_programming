#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Inserts an element to the hash table
 * @ht: The hash table
 * @key: The key of the element to add
 * @value: The value the key inserts
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_element;

	if (ht == NULL || value == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}

	if (current == NULL)
		ht->array[index] =  new_element;

	else
	{
		new_element->next = current;
		ht->array[index] = new_element;
		if (strcmp(current->key, key) == 0)
			new_element->next = current->next;
		if (current->next != NULL)
			new_element->next->next = current->next;
	}
	return (1);
}
