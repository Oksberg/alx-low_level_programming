#include <stdio.h>

/**
 * main - prints number of argument passed to it
 * @argc: variable for number of arguments
 * @argv: unused variable
 *
 * Return: Integer
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc-1);
	printf("\n");
	return (0);
}
