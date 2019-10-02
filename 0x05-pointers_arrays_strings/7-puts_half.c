#include "holberton.h"
/**
 *puts_half - function that prints other characters
 *@str: the parameter
 *Return: none
 */
void puts_half(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 0)
		a = b / 2;
	else
		a = (b / 2) + 1;
	for (a = a ; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
