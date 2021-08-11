#include "holberton.h"

/**
 *_strspn - get length of a prefix substring
 *@s: string to be examined
 *@accept: string with characters matching s
 *Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int b = 0;    /* Number bytes accumulated */

	for (; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b = b + 1;
				break;
			}
		}
	}
	return (b);
}
