#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  entry point
 * @ac: parametro
 * @av: parametro
 *
 * Return: to pointer
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int m = 0, i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, m++)
		for (j = 0; av[i][j] != '\0'; j++, m++)
			;

	p = malloc(m + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0, m = 0; i < ac; i++, m++)
	{
		for (j = 0; av[i][j] != '\0'; j++, m++)
		{
			*(p + m) = av[i][j];
		}

		*(p + m) = '\n';
	}

	*(p + m) = '\0';

	return (p);
}
