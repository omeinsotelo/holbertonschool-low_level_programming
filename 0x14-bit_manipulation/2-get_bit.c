#include "holberton.h"
/**
 * get_bit - function to get the value of a bit in a given index
 * @n: the nmber
 * @index: index
 *
 * Return: the value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n == '\0' || index > 63)
		return (-1);
	return (n >> index & 1);
}
