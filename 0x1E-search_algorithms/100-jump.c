#include "search_algos.h"

/**
 * jump_search - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * Use the square root of the size of the array as the jump step
 *
 * Return: the first value index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int block_step = sqrt(size);
    unsigned int prev = 0; /* initial value to the block, more to left in index */
    unsigned int i = 0;

    if (array == NULL)
		return (-1);

    while (array[block_step] <= value && block_step < size)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev = block_step;
        block_step += sqrt(size);
        if (block_step > size - 1)
            return (-1);
    }
    printf("Value found between indexes [%d] and [%d]\n", prev, block_step);
    i = prev;
    while (i < block_step)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[i] == value)
            return (i);
        i++;
    }
    return (-1);
}
