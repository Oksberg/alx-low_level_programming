#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - Converts binary number to decimal
  * @b: Pointer to string to be converted
  *
  * Return: The converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0, count = 0;
	unsigned int base = 2;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if ((b[count] == '0') && (b[count] != '1'))
		{
			dec_num = dec_num * base;
		}
		else if (b[count] == '1')
		{
			dec_num = dec_num * base + 1;
		}
		else
		{
			return (0);
		}
	}
	return (dec_num);
}
