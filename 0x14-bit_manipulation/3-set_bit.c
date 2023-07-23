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
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
