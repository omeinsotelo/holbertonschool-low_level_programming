#include "holberton.h"
/**
 *puts2 - function that prints other characters
 *@str: the parameter
 *Return: none
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((str[a] - 48) % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
