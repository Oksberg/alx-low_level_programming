#include "main.h"

/**
* print_alphabet_x10 - print alphabet in lowercase, 10_times,
* followed by a new line
*/

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		 _putchar('\n');
	}
}
