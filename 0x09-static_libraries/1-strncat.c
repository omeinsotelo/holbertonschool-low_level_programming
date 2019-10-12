#include "holberton.h"
/**
 *_strncat - concatenates two strings.
 *@dest: The parameter
 *@src: the parameter
 *@n: This is the maximum number of characters to be appended
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}

