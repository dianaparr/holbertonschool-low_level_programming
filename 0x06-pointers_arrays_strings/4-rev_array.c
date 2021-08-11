#include "holberton.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a: Array reverse
 *@n: Number elements array
 *Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int x = n - 1, t = 0, s;
	int imp[100];

	for ( ; t < n; t++)
	{
		imp[t] = a[x];
		x--;
	}
	for (s = 0; s <= n - 1; s++)
	{
		a[s] = imp[s];
	}
}
