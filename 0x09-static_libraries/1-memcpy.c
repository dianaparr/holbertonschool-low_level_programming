#include "holberton.h"

/**
 *_memcpy - copy memory area
 *@dest: pointer to the destination array where data will be copied
 *@src: pointer to the source of the data to copy
 *@n: number of characters to copy
 *Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];  /* Space of memory not overlap */
	}
	return (dest);
}
