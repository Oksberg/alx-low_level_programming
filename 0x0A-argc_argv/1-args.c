#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that takes arguments from command line
 * @argc: The number of arguments passed
 * @argv: An array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc -1);

	return (0);
}
