#include "holberton.h"
#include <limits.h>

/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: number in base 10
 *@index: index (start 0)
 *Return: value bit in the indicated index or -1 if index is > n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* type variable unsigned long int store 64 bits (8 bytes) */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	if (((n >> index) & 1) == 1)
		return (1);
	return (0);
}
