#include "holberton.h"
#include <stdio.h>
/**
 * _strspn- Entry point
 * Description:  function that gets the length of a prefix substring.
 * @s: This is the string
 * @accept: the string whit to compare
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i, k = 0;

	for (j = 0; s[j] != '\0' ; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				k++;
				break;
			}
		}
		if (s[j] != accept[i])
			break;
	}
	return (k);
}
