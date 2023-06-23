#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - Sums all of its parameters
  * @n: number of arguments passed
  *
  * Return: Integer
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}
	else
	{
		return (0);
	}

	va_end(args);

	return (sum);
}
