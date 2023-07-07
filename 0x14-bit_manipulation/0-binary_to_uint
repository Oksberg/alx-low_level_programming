#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * power - Raises a number to a power
  * @num: Number to raise to power
  * @exponent: The power to raise the number to
  *
  * Return: Results of the calculation
  */

unsigned int power(unsigned int num, unsigned int exponent)
{
	unsigned int result = 1, i;

	for (i = 0; i < exponent; i++)
	{
		result *= num;
	}

	return (result);
}

/**
  * binary_to_uint - Converts binary number to decimal
  * @b: Pointer to string to be converted
  *
  * Return: The converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0, count = 0, len;
	unsigned int base = 2;

	len = strlen(b);
	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if ((b[count] != '0') && (b[count] != '1'))
		{
			return (0);
		}
		dec_num = dec_num + (b[count] - '0') * power(base, (len - count - 1));
	}
	return (dec_num);
}
