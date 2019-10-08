#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two digonals of a square matrix of
 * integers.
 * @a: the matrix
 * @size: the size of the matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int h, j;

	for (h = 0; h < (size * size); h += size + 1)
	{
		d1 += a[h];
	}

	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		d2 += a[j];
	}
	printf("%d, %d\n", d1, d2);
}
