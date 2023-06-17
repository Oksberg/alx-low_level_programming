#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
