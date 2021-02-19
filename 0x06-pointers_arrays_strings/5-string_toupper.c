#include "holberton.h"

/**
 *string_toupper - changes all lowercase letter of a string to uppercase
 *@str: string of characters
 *Return: Always 0.
 */

char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 97 && str[k] <= 122)
		{
			str[k] = str[k] - 32;
		}
	}
	return (str);
}
