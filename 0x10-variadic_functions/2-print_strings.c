#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings
 *@separator: is an constant and first element passed in arguments
 *@n: is an constant and number of strings passed
 *Return: strings separated by comma
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num_args;     /* argument pointer variable of type va_list */
	unsigned int s = 0;  /* iterator */
	char *str;

	va_start(num_args, n);

	for (; s < n; s++)
	{
		str = va_arg(num_args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && s < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num_args);
}
