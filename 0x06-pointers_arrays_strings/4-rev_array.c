#include "holberton.h"
/**
 * reverse_array - Entry point
 * Description: function reverses the content of an array of integers.
 * @a: parametre to check
 * @n: parametre to check number of elements of the array
 *
 * Return: always r
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	n--;
	while (i < (n / 2))
	{
		t = a[i];
		a[i] = a[n - i];
		a[n - i] = t;
		i++;
	}
}
