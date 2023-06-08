#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The string that will be printed in reverse
 *
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
