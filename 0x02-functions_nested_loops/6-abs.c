#include "holberton.h"

/**
 *_abs - the absolute value of an integer
 *@j: The character to print
 *Return: 0 always
 **/

int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
