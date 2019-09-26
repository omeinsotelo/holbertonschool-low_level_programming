#include "holberton.h"
/**
* print_line - function that draws a strainght line in the terminal
* @n: the number of the variable
* Descripcion - prints a line
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
