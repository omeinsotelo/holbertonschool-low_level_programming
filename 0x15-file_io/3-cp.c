#include "holberton.h"

/**
 * main - Function to copy a file
 * @argc: The counter for arguments
 * @argv: the arguments received
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *buffer[1024];
	int one, two, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	one = open(argv[1], O_RDONLY);
	if (one < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	two = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (two < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rd = read(one, buffer, 1024)) > 0)
	{
		wr = write(two, buffer, rd);
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if ((close(one)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", one), exit(100);
	}
	if ((close(two)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", two), exit(100);
	}
	return (0);
}
