#include "holberton.h"
#include <stdio.h>
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
