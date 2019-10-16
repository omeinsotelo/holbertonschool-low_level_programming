#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - entry point
 * @s1: the first string
 * @s2: the second string
 * Return: an address
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int cont1, cont2, j, i;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
		return ("");
	for (cont1 = 0; s1[cont1] != '\0'; cont1++)
	{
	}
	for (cont2 = 0; s2[cont2] != '\0'; cont2++)
	{
	}
	p = malloc(sizeof(char) * (cont1 + cont2 + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < cont1; j++)
	{
		p[j] = s1[j];
	}
	for (i = 0; i < cont2; i++)
	{
		p[cont1 + i] = s2[i];
	}
	return (p);
}

