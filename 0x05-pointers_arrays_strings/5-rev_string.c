#include "holberton.h"
/**
 *rev_string - function that reverse a string
 *@s: the parameter
 *Return: none
 */
void rev_string(char *s)
{
	int a, t, b;

	b = 0;

	for (a = 0; s[a] != 0; a++)
	{
	}
	a--;
	while (b < a)
	{
		t = s[b];
		s[b] = s[a];
		s[a] = t;
		b++;
		a--;
	}
}
