#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - This function determines whether n is a prime number
 * @n: The number to check whether it is a prime number
 *
 * Return: 1 if it's prime, 0 if it's not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - This function determines whether a number is an actual prime
 * @n: The number to check whether it is prime
 * @j: The iteration variable
 *
 * Return: 1 if n is a prime number, and 0 if it's not
 */
int actual_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (actual_prime(n, j - 1));
}
