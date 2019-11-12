#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX.
 * @filename: the file
 * @letters: numbers of letters
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *place;
	int valid;

	valid = open(filename, O_RDONLY);
	if (valid > 0)
	{
		return (0);
	}
	place = malloc(sizeof(char) * letters);
	if (!place)
	{
		return (0);
	}
	valid = read(valid, place, letters);
	if (valid < 0)
	{
		return (0);
	}
	valid = write(1, place, valid);
	if (valid < 0)
	{
		return (0);
	}
	return (valid);
}
