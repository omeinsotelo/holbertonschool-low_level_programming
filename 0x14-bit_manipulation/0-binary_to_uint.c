#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: Pointer to b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cont = 0;
	unsigned int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[cont] != '\0')
	{
		if (b[cont] != '0' && b[cont] != '1')
		{
			return (0);
		}
		cont++;
	}
	cont = cont - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			num = _pow_recursion(2, cont) + num;
		}
		cont--;
	}
	return (num);
}
/**
 * _pow_recursion- Entry point
 * Description: function that returns the value of x raised to the power of y.
 * @x: the number to be powering
 * @y: the power nomber
 * Return: 0 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
