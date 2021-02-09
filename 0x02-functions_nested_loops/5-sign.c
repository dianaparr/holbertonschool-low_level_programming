#include "holberton.h"

/**
 *print_sign - prints the sign of a number
 *@n: The character print
 *Return: 0 always
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
