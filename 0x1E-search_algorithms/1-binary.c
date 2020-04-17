#include "search_algos.h"
/**
* binary_search - Searches value in array of int using the L s a
* @array: Pointer to the first element of the array to search in
* @size: Is number of elements in array
* @value: Is the value to search for
* Return: the value index, NULL or -1 if not exist
*/
int binary_search(int *array, size_t size, int value)
{
	int contL;
	int contR;
	int contM;

	if (array == NULL)
		return (-1);

	contL = 0;
	contR = (int)size - 1;

	while (contL <= contR)
	{
		print_search(array, contL, contR);
		contM = (contL + contR) / 2;
		if (array[contM] < value)
			contL = contM + 1;
		else if (array[contM] > value)
			contR = contM - 1;
		else
			return (contM);
	}
	return (-1);
}
/**
 * print_search - print array
 * @array : Pointer to the first element of the array to search in
 * @contL : Left subarray index
 * @contR : Right subarray index
 * Return: none return
 */
void print_search(int *array, int contL, int contR)
{
	printf("Searching in array: ");
	for (; contL <= contR; contL++)
	{
		if (contL == contR)
		{
			printf("%d", array[contL]);
		}
		else
		{
			printf("%d, ", array[contL]);
		}
	}
	printf("\n");
}
