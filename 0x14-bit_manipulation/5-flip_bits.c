#include "main.h"
#include <stdio.h>

/**
  * flip_bits - Returns the number of bits flipped
  * @n: The number to flip from
  * @m: The number to flip to
  *
  * Return: Number of bits flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result != 0)
	{
		count += (result & 1);
		result >>= 1;
	}
	return (count);
}
