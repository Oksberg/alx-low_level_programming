#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reveres
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char a;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (j < i)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		j++;
		i--;
	}
}
