#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - entry point
 * @b: unsigned int
 * Return: a poiter
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
