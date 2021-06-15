#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - name function, free dog
 *@d: pointer to structure
 *
 *Return: Nothing, type void
 *Description: function that frees dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
