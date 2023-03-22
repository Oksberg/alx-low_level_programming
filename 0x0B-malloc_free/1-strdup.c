#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: a pointer to a string
 *
 * Return: ptr or NULL
 */

char *_strdup(char *str)
{
	char *ptr = NULL;
	int str_len, i;

	/* returning NULL if str = NULL */
	if (str == NULL)
		return (NULL);

	/* checking the length of str */
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;
	str_len += 1;

	/* allocating memory using malloc */
	ptr = malloc(str_len * sizeof(char));

	/* checking if memory has been allocated */
	if (ptr == NULL)
		return (NULL);

	/* looping through str to set it's index to ptr  */
	for (i = 0; i < str_len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
