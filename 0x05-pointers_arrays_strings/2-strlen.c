#include "holberton.h"

/**
 *_strlen - legth of a string
 *@s: pointer with the stored string
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
