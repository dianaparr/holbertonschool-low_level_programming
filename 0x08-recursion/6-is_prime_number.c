#include "holberton.h"

/**
 *is_prime_number - function return integer a prime number
 *@n: integer
 *Return: prime number
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)   /* Base case */
	{
		return (0);
	}
	return (aux_prim(n, i));
}

/**
 *aux_prim - function auxiliary
 *@num: integer
 *@i: iterator
 *Return: prime number
 */

int aux_prim(int num, int i)
{
	if (i == num)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (aux_prim(num, (i + 1)));
}
