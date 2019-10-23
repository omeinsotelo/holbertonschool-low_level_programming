#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: the size of array
 * @cmp: pointer to the function
 * Return: the index of the first element of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
		for (cont = 0; cont < size; cont++)
			if (cmp(array[cont]) != 0)
				return (cont);
	return (-1);
}
