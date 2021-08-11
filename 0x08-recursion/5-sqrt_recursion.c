#include "holberton.h"

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: integer
 *Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)   /* Base case */
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (aux(n, i));
}

/**
 *aux - function auxiliary
 *@num: integer
 *@i: iterator
 *Return: square root of a number
 */

int aux(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}
	if ((i * i) > num)
	{
		return (-1);
	}
	return (aux(num, (i + 1)));
}
