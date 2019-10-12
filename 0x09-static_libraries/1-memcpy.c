#include "holberton.h"
/**
 * _memcpy- Entry point
 * Description: function that copies memory area.
 * @dest: This is the memory area of desting
 * @src: This is the memory area copy
 * @n: This is the an unsigned char to copy
 * Return: always s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j != n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
