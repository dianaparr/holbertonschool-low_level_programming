#include "holberton.h"

/**
 **_strcpy - Copy string for dest.
 *@dest: destination variable
 *@src: source variable
 *Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = 0;
	return (dest);
}
