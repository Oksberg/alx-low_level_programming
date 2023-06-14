#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function creates n aarray and assign char c
 * @size: The size of the array
 * @c: The char to assign
 *
 * Return: The pointer to the arrayon success, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);

