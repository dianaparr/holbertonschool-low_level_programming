#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - searches for an int
 *@array: pointer array
 *@size: size of the array
 *@cmp: pointer to function to use type int
 *Return: returns the index of the first element for which the cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int it_arr;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (it_arr = 0; it_arr < size; it_arr++)
		{
			if (cmp(array[it_arr])) /* evaluates the entire array */
			{
				return (it_arr);
			}
		}
	}
	return (-1);  /* if no element matches... */
}
