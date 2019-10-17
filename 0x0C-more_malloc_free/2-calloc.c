#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - entry point
 * @nmemb: cant of elements of array
 * @size: size of array
 * Return: a poiter
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < (nmemb * size); m++)
	{
		p[m] = 0;
	}
	return (p);
}
