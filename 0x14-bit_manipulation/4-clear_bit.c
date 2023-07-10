#include "main.h"
#include <stdio.h>

/**
  * clear_bit - Sets the value of a bit to 0
  * @n: Pointer to the number
  * @index: Position of the bit value
  *
  * Return: 1 on success or -1 on failure
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index)
	{
		if (i == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		i++;
	}
	return (-1);
}
