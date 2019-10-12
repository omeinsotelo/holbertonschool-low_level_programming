#include "holberton.h"
/**
 *_strcat - concatenates two strings.
 *@dest: The parameter
 *@src: the parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);
}
