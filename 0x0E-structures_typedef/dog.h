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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* HEADER_H */
