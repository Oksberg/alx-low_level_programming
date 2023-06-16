#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: size of memory allocated
 *
 * Return: Pointer to the allocated block of memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
