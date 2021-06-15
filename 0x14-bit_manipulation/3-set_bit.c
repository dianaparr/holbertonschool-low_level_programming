#include "holberton.h"
#include <limits.h>

/**
 *set_bit - function that returns the value of a bit at a given index
 *@n: pointer to number in base 10
 *@index: index (start 0)
 *Return: value bit in the indicated index or
 *        -1 if index exceeds the space occupied by n
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit = (1 << index);

	/* type variable unsigned long int store 64 bits (8 bytes) */
	if (index < (sizeof(unsigned long int) * 8))
	{
		/* dereference pointer to n and saves the result of the logical operation */
		*n ^= set_bit;
		return (1);
	}
	return (-1);
}
