#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number- Entry point
 * Description: function that returns 1 if is a prime number
 * @n: the number
 * Return: 1 and 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (rec_aux(n, 2));
}

/**
 * rec_aux- Entrry point
 * Description: Auxiliar Funsion
 * @n: the number
 * @x: the number of iterecion
 * Return: -1, 0.
 */
int rec_aux(int n, int x)
{
	if (x == n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (rec_aux(n, x + 1));
}
