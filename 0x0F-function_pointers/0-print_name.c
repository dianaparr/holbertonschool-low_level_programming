#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - function that print name
 *@name: name to print
 *@f: pointer to function
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
