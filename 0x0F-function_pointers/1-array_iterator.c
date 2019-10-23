#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: the array
 * @size: the size of array
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array && action)
		for (cont = 0; cont < size; cont++)
			(*action)(array[cont]);
}
