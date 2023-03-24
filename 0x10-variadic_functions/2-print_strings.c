#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * print_strings - prints strings passed to the function
  * @n: number of strings passed
  * @separator: string that separates the strings passed
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);
		printf("%s", str);

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}

			if (str == NULL)
				printf("(nil)");
	}
	va_end(ap);

	printf("\n");
}
