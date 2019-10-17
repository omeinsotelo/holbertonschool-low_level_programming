#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - entry point
 * @s1: the first string
 * @s2: teh second string
 * @n: unsigned int
 * Return: a poiter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int cont1, cont2, j, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (cont1 = 0; s1[cont1] != '\0'; cont1++)
	{
	}
	for (cont2 = 0; s2[cont2] != '\0'; cont2++)
	{
	}
	if (n >= cont2)
	{
		n = cont2;
	}
	p = malloc(sizeof(char) * (cont1 + n  + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < cont1; j++)
	{
		p[j] = s1[j];
	}
	for (i = 0; i < n; i++)
	{
		p[cont1 + i] = s2[i];
	}
	p[cont1 + i] = '\0';
	return (p);
}
