#include "search_algos.h"

/**
 * interpolation_search - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search
 *
 * To determine the probe position, you can use : size_t pos =
 * low + (((double)(high - low) / (array[high] - array[low])) *
 * (value - array[low]))
 *
 * Return: the first value index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));
	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			low = pos + 1;
			pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		}
		else
		{
			high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
