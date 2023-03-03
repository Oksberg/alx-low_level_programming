#include "main.h"

/**
 * _strcmp - compares pointers to strings
 * @s1: pointer to the first string
 * @s2: pointer to the seconf string
 *
 * Return: 0 or char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
