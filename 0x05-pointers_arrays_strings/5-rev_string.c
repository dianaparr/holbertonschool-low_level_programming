#include "holberton.h"

/**
 *rev_string - print string reverse
 *@s: pointer string in reverse
 *Return: Always 0.
 */

void rev_string(char *s)
{
	int len, t = 0;
	char imp;

	for (len = 0; s[len] != '\0'; len++)
	{}
	len--;
	for (; t < len; t++)
	{
		imp = s[len];
		s[len] = s[t];
		s[t] = imp;
		len--;
	}
}
