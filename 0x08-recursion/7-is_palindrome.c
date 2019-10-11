#include "holberton.h"
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
/**
 * is_palindrome- Entry point
 * Description: function that returns 1, 0
 * @s: the string to compare
 * Return: 1 , 0.
 */
int is_palindrome(char *s)
{
	int begin, end;

	begin = 0;
	end = _strlen_recursion(s) - 1;

	return (palindrome_aux(s, begin, end));
}
/**
 * palindrome_aux- Entry point
 * Description: function aux
 * @s: the string to compare
 * @begin: first part of the string
 * @end: the end of the string
 * Return: 0 , 1
 */
int palindrome_aux(char *s, int begin, int end)
{
	if (begin < end)
	{
		if (s[begin] == s[end])
			return (palindrome_aux(s, begin + 1, end - 1));
		else
			return (0);
	}
	else
		return (1);
}
