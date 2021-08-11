#include "holberton.h"

/**
 *_strcat - concatenate two strings
 *@src: source, string to concatenat
 *@dest: destination, memory buffer characters concatenated
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, len_dest;

	len_dest = 0;
	for ( ; dest[len_dest] != 0; len_dest++)
	{}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[len_dest] = src[a];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
