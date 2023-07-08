#include "main.h"
#include <stdio.h>

/**
  * print_binary - Print the binary representation of a number
  * @n: The number
  *
  * Return: Nothing
  */

void print_binary(unsigned long int n)
{
	size_t bytes = 0, bit = 0;
	int i = 0, firstone = 0;

	bytes = sizeof(unsigned long int);

	/* Printing 0 when n is 0 */
	if (n == 0)
	{
		printf("0");
		return;
	}
	/* Iterating and printing the bit values */
	for (i = bytes * (8 - 1); i >= 0; i--)
	{
		bit = (n >> i) & 1;
		/* Setting condition for ignoring leading zeros */
		if (bit == 1)
		{
			firstone = 1;
		}
		if (firstone)
		{
			printf("%ld", bit);
		}

	}
}
