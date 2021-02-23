#include "holberton.h"

/**
 *_strchr - function locates the first occurrence of character
 *@s: string to be examined
 *@c: character to find
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)    /* string examined, without character NULL */
	{
		if (s[i] == c)
		{
			return (&s[i]);    /* return a pointer to the character c */
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');    /* return NULL if the character is not found  */
}
