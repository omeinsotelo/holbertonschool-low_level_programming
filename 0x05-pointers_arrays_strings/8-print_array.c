#include "holberton.h"
#include <stdio.h>
/**
 *print_array - function that prints other characters
 *@a: the parameter
 *@n: the parameter
 *Return: none
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		printf(", ");
	}
	printf("\n");
}
