#include "holberton.h"

/**
 *_strstr - locate a substring
 *@haystack: main string to examined
 *@needle: small string to be searched with-in haystack string
 *Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, n = 0;   /* n: contar coincidencias de las letras */
	int len;

	for (len = 0; needle[len] != '\0'; len++)
	{}
	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == ' ')
		{
			n = 0;
		}
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				n++;
			}
			if (n == len)
			{
				return (&(haystack[i - j]));
			}
		}
	}
	if (needle[0] == '\0')
	{
		return (&(haystack[0]));
	}
	else
	{
		return ('\0');    /* return NULL if the character is not found  */
	}
}
