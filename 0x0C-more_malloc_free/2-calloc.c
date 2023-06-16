#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory
 * @nmemb: The number of elements
 * @size: The size of each element
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);

	return (arr);
}
