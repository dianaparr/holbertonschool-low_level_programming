#include "holberton.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: base
 *@y: power
 *Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)   /* Base case */
	{
		return (1);
	}
	if (y < 0)    /* Base case */
	{
		return (-1);
	}
	if (y == 1)   /* Base case */
	{
		return (x);
	}
	if (y > 1)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
