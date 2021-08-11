#include "holberton.h"

/**
 *cap_string- changes all lowercase letter of a string to uppercase
 *@chr: pointer variable
 *Return: Always 0.
 */

char *cap_string(char *chr)
{
	int len, i;
	char imp[] = {32, 9, 10, 44, 59, 46, 33, 63,
		      34, 40, 41, 123, 125};

	for (len = 0; chr[len] != '\0'; len++)
	{
		for (i = 0; imp[i] != '\0'; i++)
		{
			if (chr[0] >= 97 && chr[0] <= 122)
			{
				chr[0] = chr[0] - 32;
			}
			else if (chr[len] == imp[i] && chr[len + 1] >= 97 && chr[len + 1] <= 122)
			{
				chr[len + 1] = chr[len + 1] - 32;
			}
		}
	}
	return (chr);
}
