#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: pointer type char with a string
 *@s2: pointer type char with a string
 *Return: pointer to str or NULL (if it fails)
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;            /* pointer to initialized memory */
	int i = 0, j = 0;        /* i for str1 and j for str2 */
	int c1, c2 = 0;          /* counters fill concatenated string */

	if (s1 == NULL)  /* if NULL is passed, treat it as an empty string */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')    /* lenght of the strings  */
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(((i + j) + 1) * sizeof(char));
	if (concat == NULL)  /* checks the memory */
	{
		return (NULL);
	}
	for (c1 = 0; c1 < i; c1++)
	{
		concat[c1] = s1[c1];
	}
	for (c1 = i; c1 <= i + j; c1++)
	{
		concat[c1] = s2[c2];
		c2++;
	}
	return (concat);     /* return to a pointer */
}
