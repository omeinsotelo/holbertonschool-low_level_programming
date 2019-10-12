#include "holberton.h"
/**
 * _memset - Entry point
 * Description: function that fills memory with a constant byte.
 * @s: This is a pointer to the block of memory to fill.
 * @b: This is the number of bytes to be set to the value.
 * @n: This is the an unsigned char to copy
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j != n; j++)
	{
		s[j] = b;
	}

	return (s);
}
