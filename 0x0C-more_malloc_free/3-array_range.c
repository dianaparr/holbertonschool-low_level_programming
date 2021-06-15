#include <stdlib.h>
#include "holberton.h"

/**
 *array_range - function that creates an array of integers
 *@min: minimum array value
 *@max: maximum array value
 *Return: pointer to mem_arr or NULL (if it fails)
 */

int *array_range(int min, int max)
{
	int *num_integer;
	int i, incre = 0;

	if (min > max)
	{
		return (NULL);
	}
	num_integer = malloc((max - min + 1) * sizeof(int));
	if (num_integer == NULL)
	{
		return (NULL);
	}
	incre = max - min;
	for (i = 0; i <= incre; i++)
	{
		num_integer[i] = min;
		min++;
	}
	return (num_integer);
}
