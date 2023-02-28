#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:  char to be ckecked
 *
 * Return: 0;
 */

int _strlen(char *s)
{
	int a = 0; /*start counting here*/

	for (; *s++;)
		a++;
	return (a);
}
