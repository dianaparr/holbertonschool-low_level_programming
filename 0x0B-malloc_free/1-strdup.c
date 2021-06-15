#include <stdlib.h>

/**
 *_strdup - function duplicate of the string
 *@str: duplicating string
 *Return: pointer to p or NULL (if it fails)
 */

char *_strdup(char *str)
{
	char *p;    /* pointer to initialized memory */
	int i;
	int len_str = 0;


	if (str == NULL)  /* checks the memory */
	{
		return (NULL);
	}
	while (str[len_str] != '\0')     /* similary of the function strlen() */
	{
		len_str++;
	}
	p = malloc((len_str + 1) * sizeof(char));
	if (p == NULL)   /*checks the memory */
	{
		return (NULL);
	}
	for (i = 0; i <= len_str; i++)
	{
		p[i] = str[i];   /* copy of a string given as a parameter */
	}

	return (p);     /* return to a pointer */
}
