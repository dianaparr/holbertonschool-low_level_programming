#include <stdlib.h>

/**
 *alloc_grid - 
 *@width: 
 *@height: 
 *Return: pointer to str or NULL (if it fails)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	int h;

	if (width <= 0 || height <= 0)   /* If width or height is 0 or negative, return NULL */
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)   /* memory */
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (h = i; h >= 0; h--)
			{
				free (grid[h]);
			}
			free (grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)   /* valores */
	{
		for (j = 0; j < width; j ++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
