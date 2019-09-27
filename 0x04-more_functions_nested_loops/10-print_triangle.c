#include "holberton.h"
/**
* print_triangle - entry point
* Description: prints a triangle
* @size: parametre to check
* Return: none return
*/
void print_triangle(int size)
{
	int f;
	int c;

	if (size > 0)
	{
		for (f = 0; f < size; f++)
		{
			for (c = 0; c < size; c++)
			{
				if (((f + c) >= (size - 1)))
					_putchar('#');
				else
					_putchar(' ');
			}
			c = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
