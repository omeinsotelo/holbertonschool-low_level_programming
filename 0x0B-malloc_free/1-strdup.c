#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - entry point
 * @str: the size
 * Return: an address
 */
char *_strdup(char *str)
{
	char *p;
	int cont;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont] != '\0'; cont++)

	{
	}

	p = malloc(cont * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= cont; a++)
	{
		*(p + a) = str[a];
	}

	return (p);
}
