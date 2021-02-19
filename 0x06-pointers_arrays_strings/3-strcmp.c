#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
