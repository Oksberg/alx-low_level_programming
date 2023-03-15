#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 * @argc: variable for size of argv
 * @argv: variable for arguments passed into the program
 * @sum: A running addition
 * @i: Integer
 *
 * Return: (0) for success, (1) for Error
 */

int main(int argc, char *argv[])
{
	int sum, i;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		sum = sum + atoi(argv[i]);
		if (i == (argc - 1))
		printf("%d\n", sum);
	}
	return (0);
}
