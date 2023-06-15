#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function concats all argument of the prog.
 * @ac: Argument count
 * @av: Array of arguments
 *
 * Return: pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int x = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[x] = av[i][j];
			x++;

			if (av[i][j + 1] == '\0')
			{
				str[x++] = '\n';
			}
		}
	}
	str[x] = '\0';

	return (str);
}
