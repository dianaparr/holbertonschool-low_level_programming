#include "holberton.h"

/**
 *_memset - function that fill memory with a constant byte
 *@s: pointer to the memory block to set
 *@b: value to be copied
 *@n: number of bytes to be fixed
 *Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
