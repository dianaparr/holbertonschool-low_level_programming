#include "holberton.h"

/**
 *print_line - prints underscore
 *@n: number
 *Return: 0 always
**/

void print_line(int n)
{
	int f;

	f = 0;
	while (f < n)
	{
		_putchar(95);
		f++;
	}
	_putchar('\n');
}
