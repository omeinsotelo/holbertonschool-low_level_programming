#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: the file
 * @text_content: the content
 * Return: 1 success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int counter;
	int wr;
	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (counter = 0; text_content[counter] != '\0'; counter++)
	{
	}
	wr = write(fd, text_content, counter);
	if (wr < 0)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
