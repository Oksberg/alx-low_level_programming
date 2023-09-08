#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table
 *
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table;

	/* Allocation memory for the created hash table */
	hash_table = malloc(sizeof(hash_table_t));

	/* Checking if mem alloc was successful */
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;

	/* Allocating memory to the pointer to nodes of the table */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	/* Checking malloc success */
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		return (NULL);
	}

	/* Setting all node pointers to NULL */
	for (; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
