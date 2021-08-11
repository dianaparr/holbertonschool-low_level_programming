#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int q;

	for (q = 0; s1[q] && s2[q] != '\0'; q++)
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
	}
	return (0);
}
