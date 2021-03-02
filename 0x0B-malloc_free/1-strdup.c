#include <stdlib.h>

/**
 *_strdup - function duplicate of the string
 *@str: duplicating string
 *Return: pointer to str or NULL (if it fails)
 */

char *_strdup(char *str)
{
	char *p;    /* pointer to initialized memory */
	int i;
	int len_str = 0;

	p = (char *) malloc((len_str + 1) * sizeof(char));

	if (str == NULL)  /* checks the memory */
	{
		return (NULL);
	}
	while (str[len_str] != '\0')     /* similary of the function strlen() */
	{
		len_str++;
	}
	
	for (i = 0; i < len_str; i++)
	{
		p[i] = str[i];   /* copy of a string given as a parameter */
	}
	if (p == NULL)   /*checks the memory */
	{
		return (NULL);
	}
	return (p);     /* return to a pointer */
}
