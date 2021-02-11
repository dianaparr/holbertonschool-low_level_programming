#include "holberton.h"

/**
 *_isdigit - function checks for a digit
 *@c: The character print
 *Return: 0 always
**/

int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
