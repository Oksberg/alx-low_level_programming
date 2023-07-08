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
	int i = 0, bit = 0, firstone = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = 12; i >= 0; i--)
	{
		bit = (n >> i)& 1;
		if (bit == 1)
		{
			firstone =1;
		}
		if (firstone)
		{
			printf("%d", bit);
		}

	}
}
