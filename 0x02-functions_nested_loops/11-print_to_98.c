#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print natural numbers
 *@n: natural number inicialization
 *Return: 0 always
 **/

void print_to_98(int n)
{
	int nat;

	nat = n;
	while (nat <= 98)
	{
		printf("%d, ", nat);
		nat++;
	}
	if (nat == 98)
	{
		printf("%d", nat);
	}
}
