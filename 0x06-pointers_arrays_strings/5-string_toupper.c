#include "holberton.h"
/**
 * string_toupper - Entry point
 * Description: changes all lowercase letters of a string to uppercase.
 * @c: parametre to check
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
