#include "holberton.h"

/**
 *print_triangle - prints square
 *@size: size of the square
 *Return: 0 always
**/

void print_triangle(int size)
{
	int w, z, a;

	for (w = 0; w < size; w++)
	{
		for (z = 1; z < size - w; z++)
		{
			_putchar(' ');
		}
		for (a = 1; a <= w + 1; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
