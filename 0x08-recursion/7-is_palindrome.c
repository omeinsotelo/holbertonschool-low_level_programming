#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number- Entry point
 * Description: function aux
 * @s: the string
 * @n:
 * Return: 1 and 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (rec_aux(n, 2));
}

/**
 * is_palidrome- Entrry point
 * Description: function that returns 1 if a string is a palindrome and 0 if not.
 * @s: teh string
 * Return: 1, 0.
 */
int is_palindrome(char *s)
{
	if (x == n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (rec_aux(n, x + 1));
}
