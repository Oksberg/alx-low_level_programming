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
	unsigned long int  byte;
	int bit, i = 0, j = 0;
	int realbits = 0, leadingzeros = 1;

	/* Setting condition for when n is 0 */
	if (n == 0)
	{
		printf("0");
		return;
	}

	/* Iterating to get the bytes */
	for (i = sizeof(int); i >= 0; i--)
	{
		byte = (n >> (i * 8)) & 0xFF;
		for (j = 7; j >= 0; j--)
		{
			/* Iterating to get the bits */
			bit = (byte >> j) & 1;
			if (bit)
				realbits = 1;

			/* Checking for leading zeros */
			if (realbits)
			{
				leadingzeros = 0;
				printf("%d", bit);
			}
			else if (!leadingzeros && j == 0)
			{
				printf("0");
			}
		}
	}
}
