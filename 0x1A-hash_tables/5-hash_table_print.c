#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - Inserts an element to the hash table
 * @ht: The hash table
 *
 * Return: List or NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int first = 1;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
