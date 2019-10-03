#include "holberton.h"
/**
 * _strcmp - Entry point
 * Description: function that cancatenates two strings
 * @s1: parametre to check
 * @s2: parametre to check
 *
 * Return: always r
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] == s2[i])
			r = s1[i] - s2[i];
		else
		{
			r = s1[i] - s2[i];
			break;
		}
	return (r);
}
