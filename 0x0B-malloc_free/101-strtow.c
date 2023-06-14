#include "main.h"
#include <stdlib.h>

/**
 * count_word - This function counts the number of words in a string
 * @s: The string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int note, word = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			note = 0;
		else if (note == 0)
		{
			note = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - This function splits a string into
 * @str: The string to split
 *
 * Return: pointer to array of strings on success, NULL on failure
 */

char **strtow(char *str)
{
	char **split, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				split[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	split[j] = NULL;

	return (split);
}
