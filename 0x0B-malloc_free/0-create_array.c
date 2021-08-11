#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *@size: size of the array
 *@c: type char that initializes the array
 *Return: pointer to str or NULL (if it fails)
 */

char *create_array(unsigned int size, char c)
{
	char *str;    /* pointer to initialized memory */
	unsigned int i;

	str = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL) /* checks if the memory has been allocated successfully */
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;   /* initializes with a specific character */
	}
	return (str);     /* return to a pointer */
}
