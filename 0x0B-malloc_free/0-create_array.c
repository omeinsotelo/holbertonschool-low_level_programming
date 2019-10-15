#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: unsigned int
 * @c: specific char
 * Return: pointer
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
