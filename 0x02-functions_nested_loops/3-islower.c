#include "holberton.h"

/**
 *_islower - function that checks for lowercase character
 *@c: The character print
 *Return: 0 always
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
