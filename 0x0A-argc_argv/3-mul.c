#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that takes arguments from command line
 * @argc: The number of arguments passed
 * @argv: An array of arguments passed
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
