#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that takes arguments from command line
 * @argc: The number of arguments passed
 * @argv: The array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	for (i = 0; i < 5 && num > 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);

	return (0);
}
