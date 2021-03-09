#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - name of the structure
 * @name: pointer type char
 * @age: type float
 * @owner: pointer type char
 *
 * Description: structure type with the elements name, owner and age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* HEADER_H */
