#include "holberton.h"

/**
 *swap_int - function swaps the values
 *@d: variable temporal to make the exchange
 * *Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
