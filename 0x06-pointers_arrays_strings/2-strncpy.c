#include "main.h"

/**
 * _strncpy - copies at most n bytes from src into dest
 * @src: the string to copy from
 * @dest: the string to copy to
 * @n: the maximum number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
