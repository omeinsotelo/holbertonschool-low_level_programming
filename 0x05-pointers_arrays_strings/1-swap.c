#include "holberton.h"
/**
 *swap_int - function swap the value of two integers
 *@a: the parameter
 *@b: the parameter
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
