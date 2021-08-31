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
    unsigned int min_number = 0;
    unsigned int prev = 0; /* initial value to the block, more to left in index */
    int state_flag = 0;

    if (array == NULL)
		return (-1);

    min_number = find_min(block_step, size);
    while (array[min_number - 1] < value)
    {
        state_flag = 1;
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev = block_step;
        block_step += sqrt(size);
        if (prev >= size)
            return (-1);
        min_number = find_min(block_step, size);
    }
    if (state_flag)
    {
        prev -= (int)sqrt(size);
        block_step -= (int)sqrt(size);
    }
    printf("Value found between indexes [%d] and [%d]\n", prev, block_step);
    while (prev < block_step)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev++;
    }
    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    if (state_flag)
    {
        prev += (int)sqrt(size);
        block_step += (int)sqrt(size);
    }

    while (array[prev] < value)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        prev++;
        min_number = find_min(block_step, size);
        if (prev == min_number)
            return (-1);
    }

    if (array[prev] == value)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        return (prev);
    }

    return (-1);
}

/**
 * find_min - 
 * @step: pointer to the first element of the array
 * @min: less position in the block
 * @max: max position in the block
 *
 * Return: min value
 */
int find_min(int min, int max)
{
    if (min < max)
        return (min);
    return (max);
}
