#include "holberton.h"

/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: string to be examined
 *@accept: string which characters needs to be located in s
 *Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');    /* return NULL if the character is not found  */
}
