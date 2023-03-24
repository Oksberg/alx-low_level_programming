#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums integers
 * @n: - number of integers to sum
 *
 * Return: (sum);
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
