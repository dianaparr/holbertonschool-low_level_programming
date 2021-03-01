#include "holberton.h"

/**
 *_isalpha - function that checks for alphabetic character
 *@c: The character print
 *Return: 0 always
**/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
