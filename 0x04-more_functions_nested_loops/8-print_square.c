#include "holberton.h"
/**
* print_square - function that draws a square in the terminal
* @size: random variable
* Description: Print a square
*/
void print_square(int size)
{
	int c;
	int f;

	if (size > 0)
	{
		for (f = 1; f <= size; f++)
		{
			for (c = 1; c <= size; c++)
				_putchar('#');
			_putchar('\n');
			c = 0;
		}
	}
	else
	_putchar('\n');
}
