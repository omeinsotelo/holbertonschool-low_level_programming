#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - entry point
 * @grid: zone to free
 * @height: of the array
 * Return: al puntero
 */
void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(*(grid + cont));
	}
	free(grid);
}

