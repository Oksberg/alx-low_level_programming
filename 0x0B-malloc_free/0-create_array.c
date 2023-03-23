#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @c: a character to iniialize to
 * @size: size of the array
 *
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	/* returning NULL if size is 0 */
	if (size == 0)
		return (NULL);

	/* allocating memory to array */
	ptr = malloc(size * sizeof(char));

	/* returning NULL if memory allocation failed */
	if (ptr == NULL)
		return (NULL);

	/* initializing members of ptr to c */
	for (i = 0; i < size; i++)
	ptr[i] = c;

	return (ptr);
}
