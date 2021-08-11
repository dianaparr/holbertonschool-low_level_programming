#include "holberton.h"

/**
 *_isupper - check for uppercase character
 *@c: The character print
 *Return: 0 always
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
