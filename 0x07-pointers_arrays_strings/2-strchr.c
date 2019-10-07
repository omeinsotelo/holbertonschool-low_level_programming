#include "holberton.h"
#include <stdio.h>
/**
 * _strchr- Entry point
 * Description: function that locates a character in a string.
 * @s: This is the string
 * @c: first occurrence of the character
 * Return: a pointer of c
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0' ; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		
	}
	if (s[j] == c)
		return (s + j);
	else 
		return (0);
}
