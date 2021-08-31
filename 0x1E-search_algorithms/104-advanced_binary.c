#include "search_algos.h"


/**
 * advanced_binary - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * The array will be sorted in ascending order
 * The value won't appear more than once in array
 *
 * Return: the first value index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	unsigned int lower = 0, higher = size - 1;

	if (array == NULL)
		return (-1);

	return (advanced_binary_recursion(array, lower, higher, value));
}


/**
 * advanced_binary_recursion - search for a value in an sorted array
 * of integers
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
int advanced_binary_recursion(int *array, int lower, int higher, int value)
{
	int middle_elm = 0;

	/* If L > R, the search terminates as unsuccessful */
	if (lower <= higher)
	{
		middle_elm = (lower + higher) / 2;
		print_array(array,  higher, lower);
		/* Begins by comparing an element in the middle of the array */
		/* with the target value. */
		if (array[middle_elm] == value)
			return (middle_elm);
		/* Two cases to search with relation to one target value and position */
		/* in the array */
		else if (array[middle_elm] > value)
			return (advanced_binary_recursion(array, lower, middle_elm - 1, value));

		return (advanced_binary_recursion(array, middle_elm + 1, higher, value));
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
