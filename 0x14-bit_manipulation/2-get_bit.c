#include "main.h"
#include <stdlib.h>

/**
  * get_bit - Prints the value of a bit at an index
  * @n: The number whose bit at index is to be printed
  * @index: The position of the bit
  *
  * Return: Value of the bit or -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	size_t bytes, bit;

	if (n == 0 || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bytes = sizeof(unsigned long int);
	if (index == 0)
		return (n & 1);

	for (i = bytes * 8 - 1; i > 0; i--)
	{
		bit = (n >> i) & 1;
		if (i == index)
		{
			return (bit);
		}
	}

	return (-1);
}
