#include "holberton.h"

/**
 *print_most_numbers - prints the numbers
 *Return: 0 always
**/

void print_most_numbers(void)
{
	int e;

	for (e = 48; e <= 57; e++)
	{
		if (e != 50 && e != 52)
		_putchar(e);
	}
	_putchar('\n');
}
