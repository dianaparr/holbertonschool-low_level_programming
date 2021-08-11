#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string
 *@s: pointer to the address of the string
 *Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')   /* Base case */
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(&s[n + 1]));
	}
	return (0);
}
