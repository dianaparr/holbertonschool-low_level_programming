#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: is an constant and first element passed in arguments
 *Return: the sum of all elements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0;
	int sum = 0;    /* to accommodate the sum */
	va_list sum_args;     /* argument pointer variable of type va_list */

	va_start(sum_args, n);

	if (n == 0)   /* the first element is zero */
	{
		return (0);
	}
	for (; s < n; s++)
	{
		sum = sum + va_arg(sum_args, int);
	}
	va_end(sum_args);
	return (sum);
}
