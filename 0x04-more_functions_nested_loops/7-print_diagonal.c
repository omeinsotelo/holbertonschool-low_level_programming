#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line in the terminal
* @n: the number of the variable
* Descripcion - prints a diagonal
*/
void print_diagonal(int n)
{
	int f;

	for (f = 1; f <= n; f++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
}
