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
	char byte, bit;
	unsigned long i = 0; 
	long j = 0;

	for (i = 0; i < sizeof(int); i++)
	{
		byte = ((char *) &n)[i];
		for (j = 8; j >= 0; j--)
		{
			bit = (byte >> j) & 1;
			printf("%d", bit);
		}
	}
}
