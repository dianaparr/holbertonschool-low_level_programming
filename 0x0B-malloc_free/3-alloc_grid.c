#include <stdlib.h>

/**
 *alloc_grid - two dimensional array of integers
 *@width: type int_the width of the two dimensional array
 *@height: type int_the height of the two dimensional array
 *Return: pointer to str or NULL (if it fails)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	int h;

	if (width <= 0 || height <= 0)   /* width or height is 0 or negative */
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)            /* memory allocation check */
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)       /* memory allocation check */
		{
			for (h = i; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)   /* prints values of the grid */
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
