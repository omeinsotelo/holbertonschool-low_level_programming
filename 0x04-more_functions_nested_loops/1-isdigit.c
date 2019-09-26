#include "holberton.h"
/**
*_isdigit - checks for a digit (0 through 9)
*@c: The digit to check
*Return: 1 if is a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if (c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
