#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function that creates a new dog
 *@name: pointer type char, parameter
 *@age: type float, parameter
 *@owner: pointer type char, parameter
 *Return: new pointer ptr_dog
 *
 *Description: creates a new gof which dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i = 0, j = 0, m, n;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)     /* check allocate memory */
		return (NULL);
	while (name[i] != '\0')    /* lenght of the strings  */
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	ptr_dog->name = malloc((i + 1) * sizeof(char));
	if ((*ptr_dog).name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = malloc((j + 1) * sizeof(char));
	if ((*ptr_dog).owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (m = 0; m <= i; m++)
	{
		(*ptr_dog).name[m] = name[m];
	}
	for (n = 0; n <= j; n++)
	{
		(*ptr_dog).owner[n] = owner[n];
	}
	ptr_dog->age = age;
	return (ptr_dog);
}
