#include "holberton.h"
/**
 *_strncpy - copy a strings.
 *@dest: The pointer destination array where the content is to be copied.
 *@src: This is the string to be copied
 *@n: The number of characters to be copied from source
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

