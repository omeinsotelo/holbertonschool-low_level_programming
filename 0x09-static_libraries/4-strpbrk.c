#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk- Entry point
 * Description:  function that searches a string for any of a set of bytes.
 * @s: This is the string
 * @accept: the string whit to compare
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i;

	for (j = 0; s[j] != '\0' ; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
			}
		}
	}
	return (NULL);
}
