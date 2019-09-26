#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line in the terminal
* @n: the number of the variable
* Descripcion - prints a diagonal
*/
void print_diagonal(int n)
{
	int c;
	int f;

	for (f = 1; f <= n; f++)
	{
	for (c = 1; c < f; c++)
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
