#include "holberton.h"

/**
 *swap_int - swaps the values
 *@a: integer for swap
 *@b: integer for swap
 *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
