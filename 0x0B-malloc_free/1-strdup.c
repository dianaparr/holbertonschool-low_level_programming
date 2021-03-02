#include <stdlib.h>
#include <string.h>

/**
 *_strdup - function duplicate of the string
 *@str: duplicating string
 *Return: pointer to str or NULL (if it fails)
 */

char *_strdup(char *str)
{
	char *p;    /* pointer to initialized memory */
	int i;
	int len_str = strlen(str + 1);

	p = (char *) malloc((len_str + 1) * sizeof(char));

	if (str == NULL && p == NULL) /* checks the memory */
	{
		return (NULL);
	}
	for (i = 0; i < len_str + 1; i++)
	{
		p[i] = str[i];   /* copy of a string given as a parameter */
	}
	return (p);     /* return to a pointer */
}
