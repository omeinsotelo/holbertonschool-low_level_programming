#include "holberton.h"
/**
 *_puts - function that print a string
 *@str: the parameter
 *Return: none
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
