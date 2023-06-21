#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Function operates on an array
  * @array: Array to operate on
  * @size: Number of elements in the array
  * @action: Pointer to a function
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL || array != NULL || size != 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
