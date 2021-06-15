#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - iterates on each element of the array
 *@array: pointer array
 *@size: size of the array
 *@action: pointer to function to use type int
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int it_arr;

	if (array != NULL && action != NULL)
	{
		for (it_arr = 0; it_arr < size; it_arr++)
		{
			action(array[it_arr]);
		}
	}
}
