#include "main.h"
#include <stdio.h>

/**
 * factorial - This function returns the factorial of a number recursively
 * @n: The number for which a factorial is to be determined
 *
 * Return: -1 for error, factorial for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
