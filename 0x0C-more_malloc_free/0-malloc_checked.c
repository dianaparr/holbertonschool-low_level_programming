#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - function that allocates memory
 *@b: bytes of memory that allocates
 *Return: pointer to b or NULL (if it fails)
 */

void *malloc_checked(unsigned int b)
{
	void *p;    /* pointer without specific data type */

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
