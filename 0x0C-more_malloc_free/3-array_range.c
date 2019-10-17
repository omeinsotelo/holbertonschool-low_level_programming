#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - entry point
 * @min: value min
 * @max: value max
 * Return: a poiter
 */
int *array_range(int min, int max)
{
	int *p;
	int m;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= (max - min); m++)
	{
		p[m] = min++;
	}
	return (p);
}
