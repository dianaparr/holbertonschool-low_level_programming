#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print natural numbers
 *@n: natural number inicialization
 *Return: 0 always
 **/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
