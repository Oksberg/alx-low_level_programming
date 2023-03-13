#include <stdio.h>

/**
 * main - prints its name
 * @argc: unused variable
 * @argv: variable to print
 *
 * Return: string
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
