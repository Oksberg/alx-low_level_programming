#include "main.h"
/**
 * _memset - fills n bytes of the memory area pointed to
 * by s with constant byte b
 * @s: pointer of the memory to be filled
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
