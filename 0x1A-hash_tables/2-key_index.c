#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key - The key to evaluate
 * @size: Maximum size of the hash table
 *
 * Return: Unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	index = index % size;

	return (index);
}
