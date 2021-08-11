#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - sum of the two diagonals of a square matrix of integers
 *@a: pointer to value
 *@size: size square matrix of integers
 *Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int d, i;
	int x = 0, y = 0, sum_d, sum_i, r;

	sum_d = 0;
	sum_i = 0;
	r = size - 1;

	for (d = 0; d < size; d++)
	{
		x = d * size + d;
		sum_d += *(a + x);
	}
	for (i = 0; i < size; i++)
	{
		y = i * size + r;
		sum_i += *(a + y);
		r--;
	}
	printf("%d, %d\n", sum_d, sum_i);
}
