#include "main.h"

/**
 * _strncat - concatenates two strings using
 * at most n bytes from src
 * does not need to be null-terminated
 * if it contains n or more bytes
 * @src: the string to append
 * @dest: the string to append to
 * @n: the number of bytes to used
 *
 * Return: pointer to the resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
