#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers
 *@separator: is an constant and first element passed in arguments
 *@n:  is an constant and second element passed in arguments
 *Return: numbers separated by comma
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s = 0;   /* iterator */
	va_list num_args;     /* argument pointer variable of type va_list */

	va_start(num_args, n);

	for (; s < n; s++)
	{
		printf("%d", va_arg(num_args, int));
		if (separator != NULL && s < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num_args);
}
