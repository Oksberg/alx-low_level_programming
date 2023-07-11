#include "main.h"

/**
  * _strlen - Counts the length of a string
  * @s: The string
  *
  * Return: The length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
		len++;
	return (len);
}

/**
  * append_text_to_file - Add text at EOF
  * @filename: Pointer to the file
  * @text_content: String to append
  *
  * Return: 1 or -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0, len;
	int fd;

	len = _strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		bytes = write(fd, text_content, len);
	}
	close(fd);

	return (bytes == len ? 1 : -1);
}
