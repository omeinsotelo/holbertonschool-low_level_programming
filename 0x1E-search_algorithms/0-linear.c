#include "search_algos.h"
/**
* linear_search - Searches value in array of int using the L s a
* @array: Pointer to the first element of the array to search in
* @size: Is the number of elements in array
* @value: Is the value to search for
* Return: the value index, NULL or -1 if not exist
*/
int linear_search(int *array, size_t size, int value)
{
	size_t search = 0;

	if (array == NULL)
		return (-1);
	for (; search <= size; search++)
	{
		printf("Value checked array[%ld] = [%d]\n", search, array[search]);
		if (array[search] == value)
			return (search);
	}
	return (-1);
}
