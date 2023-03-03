#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte
 * (\0) at the end of dest, and then adds a terminating null byte
 * @src: string to append
 * @dest: string to append to
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
