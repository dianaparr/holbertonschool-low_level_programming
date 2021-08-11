#include "holberton.h"

/**
 *_strncat - concatenate two strings
 *@dest: destination, memory buffer characters concatenated
 *@src: source, string to concatenat
 *@n: number of bytes in source
 *Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int len_dest;

	len_dest = 0;
	for ( ; dest[len_dest] != 0; len_dest++)
	{}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[len_dest + a] = src[a];
	}
	dest[len_dest + a] = '\0';
	return (dest);
}
