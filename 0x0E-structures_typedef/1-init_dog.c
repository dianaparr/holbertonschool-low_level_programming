#include "dog.h"

/**
 *init_dog - initialize a variable
 *@d: pointer to structure
 *@name: pointer type char, parameter
 *@age: type float, parameter
 *@owner: pointer type char, parameter
 *
 *Return: Nothing, type void
 *Description: function that initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)   /* If the elements of this structure are initialized, then.. */
	{
		(*d).name = name;   /* another form */
		d->age = age;
		(*d).owner = owner;
	}
}
