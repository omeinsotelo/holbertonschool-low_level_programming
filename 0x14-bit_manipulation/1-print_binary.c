#include "holberton.h"
/**
 * print_binary - convert to binary and print
 * @n: The number
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int cont = 0, comp = 1, m = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m != 0)
	{
		m = m >> 1;
		cont++;
	}

	comp = comp << (cont - 1);

	while (comp != 0)
	{
		if (comp & n)
			_putchar('1');
		else
			_putchar('0');

		comp = comp >> 1;
	}

}
