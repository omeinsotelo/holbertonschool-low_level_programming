#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - entry point
 * @width: of the array
 * @height: of the array
 * Return: al puntero
 */
int **alloc_grid(int width, int height)
{
	int **ptr, a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		*(ptr + a) = malloc(sizeof(int) * width);
		if (*(ptr + a) == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(*(ptr + b));
			}
			free(ptr);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][a] = 0;
		}
	}

	return (ptr);
}

