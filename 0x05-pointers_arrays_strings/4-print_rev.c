#include "holberton.h"
/**
 *print_rev - function that print a string in reverse
 *@s: the parameter
 *Return: none
 */
void print_rev(char *s)
{
	int c;
	int a;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (a = c; s[a] + 1; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
