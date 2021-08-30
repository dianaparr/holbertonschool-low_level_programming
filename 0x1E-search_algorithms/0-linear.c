#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * Return: the first value index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int iterator = 0;
	int search_value = 0;

	if (value == '\0' || array == NULL)
		return (-1);

	while (iterator < size)
	{
		printf("Value checked array[%d] = [%d]\n", iterator, array[iterator]);
		if (value == array[iterator])
		{
			/* if list in given position is equal to target value */
			/* (L[i] == T) return iterator */
			search_value = value;
			return (search_value);
		}
		iterator++;
	}
	return (-1);
}
