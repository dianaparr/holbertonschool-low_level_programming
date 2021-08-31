#include "search_algos.h"

/**
 * binary_search - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * The array will be sorted in ascending order
 * The value won't appear more than once in array
 *
 * Return: the first value index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left_elm = 0;
	int right_elm = size - 1;
	int middle_elm = 0;

	if (array == NULL)
		return (-1);

	/* If L > R, the search terminates as unsuccessful */
	while (left_elm < right_elm)
	{
		middle_elm = (left_elm + right_elm) / 2;
		print_array(array, right_elm, left_elm);
		/* Begins by comparing an element in the middle of the array */
		/* with the target value. */
		if (array[middle_elm] == value)
			return (middle_elm);
		/* Two cases to search with relation to one target value and position */
		/* in the array */
		else if (array[middle_elm] < value)
			left_elm = middle_elm + 1;
		else
			right_elm = middle_elm - 1;
	}
	/* print if he case search is the last element of the array */
	printf("Searching in array: %d\n", array[right_elm]);
	if (array[right_elm] == value)
		return (right_elm);
	return (-1);
}

/**
 * print_array - for print elements of the array
 * @array: pointer to the first element of the array
 * @right_elm: last element of the array (size - 1)
 * @left_elm: first element of the array (array[0])
 */
void print_array(int *array, int right_elm, int left_elm)
{
	int i = left_elm;

	printf("Searching in array: ");
	while (i < right_elm)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);
}
