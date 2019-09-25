#include "holberton.h"
#include <stdlib.h>

/**
* times_table - print 9 times table
*
* Return: none;
*/
void times_table(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
		r = n * m;
		if ((r / 10) != 0)
			_putchar((r / 10) + '0');
		else if (r != 0 && m != 0)
			_putchar(' ');
		else if (r == 0 && n == 0 && m != 0)
			_putchar(' ');

		_putchar((r % 10) + '0');
		if (m < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	}
}
