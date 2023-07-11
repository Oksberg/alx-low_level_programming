#include "main.h"

/**
  * _strlen - Counts length ofa string
  * @s: The string
  *
  * Return: Length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
  * create_file - Creates a file
  * @filename: Pointer to the file
  * @text_content: A string to write too the file
  *
  * Return: 1 or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0, len;
	int fd;

	len = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);

	return (bytes == len ? 1 : -1);
}
