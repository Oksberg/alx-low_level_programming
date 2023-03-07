#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area where n is copied to
 *@src: memory area from where n is copied
 *@n: number of bytes to be copied
 *
 *Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
