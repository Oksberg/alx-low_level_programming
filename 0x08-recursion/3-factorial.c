#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number whose factorial is to be determined
 *
 * Return: 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
