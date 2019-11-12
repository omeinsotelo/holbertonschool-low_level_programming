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
	int valido, validr, validw;

	valido = open(filename, O_RDONLY);
	if (valido < 0)
	{
		return (0);
	}
	place = malloc(sizeof(char) * letters);
	if (place == NULL)
	{
		return (0);
	}
	validr = read(valido, place, letters);
	if (validr < 0)
	{
		return (0);
	}
	validw = write(1, place, validr);
	if (validw < 0)
	{
		return (0);
	}
	return (validw);
}
