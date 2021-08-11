#include <stdio.h>
#include "dog.h"

/**
 *print_dog - print a structure
 *@d: pointer to structure
 *
 *Return: Nothing, type void
 *Description: function that prints a struct dog
 */

void print_dog(struct dog *d)
{
	if (d != 0)   /* If the elements of this structure are initialized, then.. */
	{
		if ((*d).name == NULL)
		{
			(*d).name = "(nil)";
		}
		/* with float not necessary, warning of incompatible types */
		if ((*d).owner == NULL)
		{
			(*d).owner = "(nil)";
		}
		printf("Name: %s\n", (*d).name);
		printf("Age: %6f\n", d->age);
		printf("Owner: %s\n", (*d).owner);
	}
}
