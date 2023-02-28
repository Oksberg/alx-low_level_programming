#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int whose value is to be swaped
 * @b: int whose value is to be swaped
 *
 * Return 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
