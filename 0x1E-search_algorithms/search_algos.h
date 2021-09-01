#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Structures */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


/* mandatory tasks */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int right_elm, int left_elm);


/* advanced tasks */

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_version2(int *array, int lower, int higher, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursion(int *array, int lower, int higher, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *linear_to_jump(listint_t *lower, listint_t *higher, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *linear_to_skip(skiplist_t *lower, skiplist_t *higher, int value);

#endif /* HEADER_H */
