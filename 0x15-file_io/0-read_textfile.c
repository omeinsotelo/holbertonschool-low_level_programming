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

	if (!filename)
		return (0);
	valido = open(filename, O_RDONLY);
	if (valido == -1)
		return (0);

	place = malloc(sizeof(char) * letters);
	if (!place)
	{
		close(valido);
		return (0);
	}

	validr = read(valido, place, letters);
	if (validr < 0)
	{	close(valido);
		free(place);
		return (0);
	}
	validw = write(STDOUT_FILENO, place, validr);
	if (validw < 0)
	{
		close(valido);
		free(place);
		return (0);
	}
	close(valido);
	free(place);
	return (validr);
}
