#include <stdio.h>

/**
 * main - Entry point
 * @argc: variable for size of argv
 * @argv: string variable
 *
 * Return: String
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	argv++;
	return (0);
}
