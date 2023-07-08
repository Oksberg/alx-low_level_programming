#include "main.h"
#include <stdio.h>

/**
  * set_bit - Overwrites the value of a bit to 1 at an index
  * @n: Pointer to the number
  * @index: Position of the bit
  *
  * Return: 1 on success or -1 on failure
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (n == NULL)
		return (-1);

	while (i <= index)
	{
		if (i == index)
		{
			*n |= (1 << index);
			return (1);
		}
		i++;
	}

	return (-1);
}
