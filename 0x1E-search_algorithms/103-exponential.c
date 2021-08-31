#include "search_algos.h"

/**
 * exponential_search - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * Use powers of 2 as exponential ranges to search in your array
 *
 * Return: the first value index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int lower = 0, higher = 0;

	if (array == NULL)
		return (-1);

	if (array[i] == value)
		return (i);
	i = 1;
	while (i < size && array[i] < value)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	/* Place values for bounds, last section to search for the key */
	lower = i / 2;
	if (i < size)
		higher = i;
	else
		higher = size - 1;
	printf("Value found between indexes [%d] and [%d]\n", lower, higher);
	return (binary_search_version2(array, lower, higher, value));
}

/**
 * binary_search_version2 - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @lower: lower bound in the "good array" (where find the key)
 * @higher: higher bound in the "good array" (where find the key)
 * @value: value to search for
 *
 * The array will be sorted in ascending order
 * The value won't appear more than once in array
 *
 * Return: the first value index where value is located
 */
int binary_search_version2(int *array, int lower, int higher, int value)
{
	int middle_elm = 0;

	if (array == NULL)
		return (-1);

	/* If L > R, the search terminates as unsuccessful */
	while (lower < higher)
	{
		middle_elm = (lower + higher) / 2;
		print_array(array, higher, lower);
		/* Begins by comparing an element in the middle of the array */
		/* with the target value. */
		if (array[middle_elm] == value)
			return (middle_elm);
		/* Two cases to search with relation to one target value and position */
		/* in the array */
		else if (array[middle_elm] < value)
			lower = middle_elm + 1;
		else
			higher = middle_elm - 1;
	}
	/* print if he case search is the last element of the array */
	printf("Searching in array: %d\n", array[higher]);
	if (array[higher] == value)
		return (higher);
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
