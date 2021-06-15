#include <stdlib.h>
#include "holberton.h"

/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: the first n bytes of s2
 *Return: pointer to b or NULL (if it fails)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int slen1, slen2; /* string iterators */
	char *string_new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len_str(s2))
	{
		n = len_str(s2);
	}
	string_new = malloc(len_str(s1) + n + 1);   /* memory allocation */
	if (string_new == NULL)
	{
		return (NULL);
	}
	for (slen1 = 0; slen1 < len_str(s1); slen1++)
	{
		string_new[slen1] = s1[slen1];
	}
	for (slen2 = 0; slen2 < n; slen2++)
	{
		string_new[slen1] = s2[slen2];
		slen1++;
	}
	string_new[slen1] = '\0';
	return (string_new);
}


/**
 *len_str - length of the string
 *@s: pointer type char
 *Return: c
 */

unsigned int len_str(char *s)
{
	unsigned int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
