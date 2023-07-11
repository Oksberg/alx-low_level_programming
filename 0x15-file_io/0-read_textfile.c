#include "main.h"

/**
  * read_textfile - Reads a text files and prints it
  * @filename: Pointer to the file
  * @letters: No of letter to read and print
  *
  * Return: Number of letters read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];
	int fd;

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fd);

	return (bytes);
}
