#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - This function checks whether an input is a number
 * @str: The string to check
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - A function that takes arguments from command line
 * @argc: The number of arguments passed
 * @argv: An array of arguments passed
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int num;
	int result = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			num = atoi(argv[count]);
			result += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", result);

	return (0);
}
