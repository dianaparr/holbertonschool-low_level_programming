#include "holberton.h"

/**
 *print_last_digit - prints the last digit
 *@n: the number from main
 *Return: 0 always
 **/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l % 10);
}
