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
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
		return (1);
}
