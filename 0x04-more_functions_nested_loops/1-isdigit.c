#include "holberton.h"

/**
 *_isdigit - function checks for a digit
 *@c: The character print
 *Return: 0 always
**/

int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	else if (c >= 97 && c >= 122)
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (0);
}
