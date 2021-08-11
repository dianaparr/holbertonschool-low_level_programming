#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print elements array
 *@a: pointer
 *@n: integer
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
