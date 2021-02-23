#include "holberton.h"

/**
 *_strstr - locate a substring
 *@haystack: main string to examined
 *@needle: small string to be searched with-in haystack string
 *Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	for (; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&needle[i]);
			}
		}
	}
	return ('\0');    /* return NULL if the character is not found  */
}
