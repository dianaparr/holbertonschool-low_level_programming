#include "holberton.h"

/**
 *print_numbers - prints the numbers
 *Return: 0 always
**/

void print_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
