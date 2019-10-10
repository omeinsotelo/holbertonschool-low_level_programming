#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion- Entry point
 * Description: function that prints a string in reverse.
 * @s: the string to reverse
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;

	_putchar(*s);
}
