#include <stdlib.h>
#include "holberton.h"

/**
 *_realloc - function that reallocates a memory block
 *@ptr: pointer to the memory previously allocated
 *@old_size: size in bytes of the allocated space for pointer ptr
 *@new_size: in bytes of the new memory block
 *Return: pointer to ptr_new or NULL (if it fails)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;    /* temporaly pointer */

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)  /*  for all values of old_size and new_size */
		{
			return (NULL);
		}
		return (ptr_new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	if (ptr_new == NULL)    /* check allocated memory */
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy_area(ptr_new, ptr, old_size); /* copy bytes old_size */
	}
	else
	{
		memcpy_area(ptr_new, ptr, new_size);
	}
	free(ptr);
	return (ptr_new);
}

/**
 *memcpy_area - copy memory area
 *@dest: pointer to the destination array where data will be copied
 *@src: pointer to the source of the data to copy
 *@n: number of characters to copy
 */

void memcpy_area(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];  /* Space of memory not overlap */
	}
	/* type void, not return */
}
