#include "search_algos.h"

/**
 * linear_skip - search for a value in an sorted list of integers
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ptr_tmp = list, *ptr_last = NULL;

	if (list == NULL)
		return (NULL);

	while (ptr_tmp->express != NULL)
	{
		if (ptr_tmp->n <= value && ptr_tmp->express->n >= value)
			break;
		printf("Value checked at index [%ld] = [%d]\n",
		ptr_tmp->express->index, ptr_tmp->express->n);
		ptr_tmp = ptr_tmp->express;
	}
	/* last node */
	if (ptr_tmp->express == NULL)
	{
		ptr_last = ptr_tmp;
		while (ptr_last->next)
			ptr_last = ptr_last->next;
		printf("Value found between indexes [%ld] and [%ld]\n",
		ptr_tmp->index, ptr_last->index);
		return (linear_to_skip(ptr_tmp, ptr_last, value));
	}
	else
	{
		printf("Value checked at index [%ld] = [%d]\n",
		ptr_tmp->express->index, ptr_tmp->express->n);
		printf("Value found between indexes [%ld] and [%ld]\n",
		ptr_tmp->index, ptr_tmp->express->index);
		return (linear_to_skip(ptr_tmp, ptr_tmp->express, value));
	}
}


/**
 * linear_to_skip - search for a value in an list of integers
 * @lower: first element of a list
 * @higher: last element of a list
 * @value: value to search for
 *
 * Useful, in this case to "skip list"
 *
 * Return: a pointer to the first node where value is located
 */
skiplist_t *linear_to_skip(skiplist_t *lower, skiplist_t *higher, int value)
{
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
