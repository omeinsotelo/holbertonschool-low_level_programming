#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion- Entry point
 * Description: function that returns the natural square root of a number.
 * @n: the number
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_aux(n, 1));
}

/**
 * sqrt_aux- Entrry point
 * Description: Auxiliar Funsion
 * @n: the number
 * @i: the number of iterecion
 * Return: -1, i
 */
int sqrt_aux(int n, int i)
{
	if (n <= 0)
		return (-1);
	if (n < i * i)
		return (-1);
	if (n == i * i)
		return (i);
		return (sqrt_aux(n, i + 1));
}
