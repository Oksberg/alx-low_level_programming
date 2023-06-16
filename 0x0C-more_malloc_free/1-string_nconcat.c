#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes os s2 to be copied
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, dest_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	dest_len = len1 + 1 + n;

	ptr = (char *)malloc(dest_len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';

	return (ptr);
}
