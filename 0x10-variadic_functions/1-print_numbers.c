#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints passed numbers
 * @n: number of numbers passed
 * @separator: string that separates the printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		if (separator != NULL && i < (n -1))
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
	}

	va_end(ap);

	printf("\n");
}
