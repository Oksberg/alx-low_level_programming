#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function counts the length of a string and returns it
 * @s: The string whose length is to be counted
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
