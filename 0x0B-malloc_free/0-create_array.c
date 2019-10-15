#include <stdio.h>
/**
 * main - create_array
 * @size: unsigned int
 * @c: a specific char
 * Return: NULL,
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int q;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(c));
	if (p == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < size; q++)
	{
		*(p + q) = c;
	}

	return (p);
}
