#include "holberton.h"

/**
 *print_last_digit - function that prints the last digit of a number
 *@l: The number to print, last_digit
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
