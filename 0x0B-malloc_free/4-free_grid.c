#include <stdlib.h>

/**
 *free_grid - frees a two dimensional grid previously created
 *@grid: pointer to grid and array to be freed
 *@height: type int_the height of the two dimensional array
 *Return: pointer to str or NULL (if it fails)
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}
	free(grid);
}
