#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - Prints all of the specified types
  * @format: Type of parameter passed
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	int j = 0;
	const char *ft = format;
	va_list args;

	va_start(args, format);
	while (*ft != '\0')
	{
		if (*ft == 'c')
		{
			char c = va_arg(args, int);

			printf("%c", c);
		}
		else if (*ft == 'i')
		{
			int i = va_arg(args, int);

			printf("%d", i);
		}
		else if (*ft == 'f')
		{
			double f = va_arg(args, double);

			printf("%f", f);
		}
		else if (*ft == 's')
		{
			char *s = va_arg(args, char *);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		ft++;
		while (j < *ft - 1)
			printf(",");
		j++;
	}
	printf("\n");
	va_end(args);
}
