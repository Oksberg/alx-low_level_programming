#include "main.h"

#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/**
  * main - Entry point
  * @argc: Number of parameters
  * @argv: Arguments
  *
  * Return: 1 on success, 0 on failure
  */
int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0;
	ssize_t bytes_in = 0;
	char buffer[READ_BUF_SIZE];

	/* Checking the number of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

	/* Openning destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);

	/* Reading and writing buffer by buffer */
	while ((bytes_in = read(fd_from, buffer, sizeof(buffer))) > 0)
		if (write(fd_to, buffer, bytes_in) != bytes_in)
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
	if (bytes_in == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);

	/* Closing opened files or printing error message */
	fd_from = close(fd_from);
	fd_to = close(fd_to);

	if (fd_from)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_from), exit(100);
	if (fd_to)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_to), exit(100);

	exit(0);
}
