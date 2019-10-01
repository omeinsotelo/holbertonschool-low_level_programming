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
		a++;
	}
	for (c = a -1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
