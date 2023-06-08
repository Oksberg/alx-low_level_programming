#include "main.h"

/**
 * _pow_recursion - This function returns a number x to the power y
 * @x: The base interger
 * @y: The power to which x is raised
 *
 * Return: -1 if y is negative, the value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return  (1);
	}
	if (x == 1)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
