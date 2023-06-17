#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates memory
 * @ptr: Pointer to memory allocated by malloc
 * @old_size: Size of malloc allocated memory
 * @new_size: Size of memory to be reallocated
 *
 * Return: Pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (ptr == NULL)
		ptr = malloc(new_size);

	else if (new_size == 0)
	{
		free(ptr);
		ptr = NULL;
	}

	else if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (nptr != NULL)
		{
			memcpy(nptr, ptr, old_size);
			free(ptr);
			ptr = nptr;
		}
		else
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
