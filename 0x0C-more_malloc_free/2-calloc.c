#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc - function that allocates memory for an array
 *@nmemb: number of memory blocks
 *@size: size of each block
 *Return: pointer to mem_arr or NULL (if it fails)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;    /* iterador para asignar memory */
	char *mem_arr;

	if (nmemb == 0 || size == 0)       /* calloc definition */
	{
		return (NULL);
	}
	mem_arr = malloc(nmemb * size);
	if (mem_arr == NULL)    /* check memory */
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)    /* up to allocate memory */
	{
		mem_arr[i] = 0;         /* The memory is set to zero */
	}
	return (mem_arr);
}
