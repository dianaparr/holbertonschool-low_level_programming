#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - concatenates all the arguments
 *@ac: type int
 *@av: double pointer type char
 *Return: pointer to concat or NULL (if it fails)
 */

char *argstostr(int ac, char **av)
{
	int n = 0;   /* iterador para longitud de cada argumento */
	int m = 0, p = 0, a = 1, l = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (n < ac)    /* longitud de cada argumento  */
	{
		a = a + len_str(av[n]);
		n++;
	}
	concat = malloc((a + ac) * sizeof(char));
	if (concat == NULL)   /* check */
	{
		return (NULL);
	}
	while (m < ac)    /* recorre cada argumento */
	{
		p = 0;
		while (p < len_str(av[m]))   /* entra a cada uno de los argumentos */
		{
			if (l < a + (ac - 1))
			{
				concat[l] = av[m][p];
			}
			l++;
			p++;
		}
		concat[l] = '\n';
		l++;
		m++;
	}
	concat[a + ac - 1] = '\0';
	return (concat);
}

/**
 *len_str - length of each argument
 *@s: pointer type char
 *Return: c
 */

int len_str(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
