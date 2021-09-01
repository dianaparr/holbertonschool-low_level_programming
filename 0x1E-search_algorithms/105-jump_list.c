#include "search_algos.h"

/**
 * jump_list - search for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number elements of the array
 * @value: value to search for
 *
 * The array will be sorted in ascending order
 * The value won't appear more than once in array
 *
 * Return: the first value index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *lower = list, *higher = NULL;
    listint_t *ptr_tmp = list;
    unsigned int block_step = 0;
    unsigned int i = 0;

    if (list == NULL)
        return (NULL);

    block_step = sqrt(size);
    /* jumps the block in block */
    for ( ; i < block_step; i++)
        ptr_tmp = ptr_tmp->next;
    higher = ptr_tmp;
    while (block_step < size)
    {
        if (higher == NULL || (lower->n <= value && higher->n >= value))
            break;
        printf("Value checked at index [%ld] = [%d]\n", higher->index, higher->n);
        lower = higher;
        /* jumps the block in block */
        for (i = 0; i < block_step; i++)
            ptr_tmp = ptr_tmp->next;
        higher = ptr_tmp;
    }
    /* ir a la ultima posición */
    if (higher == NULL)
    {
        ptr_tmp = lower;
        while (ptr_tmp->next)
        {
            ptr_tmp = ptr_tmp->next;
        }
        higher = ptr_tmp;
    }
    if (size > 3)
    {
        printf("Value checked at index [%ld] = [%d]\n", higher->index, higher->n);
        printf("Value found between indexes [%ld] and [%ld]\n", lower->index, higher->index);
    }
    else
        printf("Value found between indexes [0] and [%ld]\n", higher->index);
    /* Linear search */
    while (lower->index < higher->index)
    {
        printf("Value checked at index [%ld] = [%d]\n", lower->index, lower->n);
        if (lower->n == value)
            return (lower);
        lower = lower->next;
    }
    if (lower->n == value && (lower->index == higher->index))
    {
        printf("Value checked at index [%ld] = [%d]\n", lower->index, lower->n);
        return (lower);
    }
    printf("Value checked at index [%ld] = [%d]\n", lower->index, lower->n);
    return (NULL);
}
