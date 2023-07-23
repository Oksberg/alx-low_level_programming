#include "main.h"
#include <stdio.h>

/**
  * get_endianness - Checks the endianness
  *
  * Return: 1 0r 0
  */

int get_endianness(void)
{
	int num = 0;
	char *ptr = NULL;

	ptr = (char *)&num;

	return (*ptr == 1)? 1 : 0;
}
