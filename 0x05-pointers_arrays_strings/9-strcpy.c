#include "holberton.h"
#include <stdio.h>
/**
 *print_array - function that prints other characters
 *@dest: the parameter
 *@src: the parameter
 *Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m] != '\0')
	{
		dest[m] = src[m];
		if ((src[m + 1] == '\0'))
			dest[m + 1] = src[m + 1];
		i++;
	}
	return (dest);
}
