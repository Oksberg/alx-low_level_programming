#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - This function checks whether input is a number
 * @str: The string to check
 *
 * Return: 1 if it's digit , 0 if it's not
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
	int num1;
	int num2;
	int mul;
	int count = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (check_num(argv[1]))
	{
		num1 = atoi(argv[1]);
		count++;
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
