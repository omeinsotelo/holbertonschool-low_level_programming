#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion- Entry point
 * Description: function that returns the length of a string.
 * @s: the string to length
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
		return (1 + _strlen_recursion(s + 1));
}
