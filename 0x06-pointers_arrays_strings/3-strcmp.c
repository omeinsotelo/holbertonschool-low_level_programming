#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1: This is the first string to be compared
 *@s2: This is the second string to be compared
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			r = s1[i] - s2[i];
		else
			r = s1[i] - s2[i];
			break;
	}

	return (r);
}

