#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - This function determines the natural square of a number
 * @n: The number whose root is to be determined
 *
 * Return: -1 if n has no natural square root, the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - This function determines the natural square root
 * @n: The number for which a square root is to be determined
 * @j: The iteration variable
 *
 * Return: The square root
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (actual_sqrt_recursion(n, j + 1));
}
