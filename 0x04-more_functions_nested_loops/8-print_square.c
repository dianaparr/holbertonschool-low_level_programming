#include "holberton.h"

/**
 *print_square - prints square
 *@size: size of the square
 *Return: 0 always
**/

void print_square(int size)
{
	int f, c;

	if (size > 0)
	{
		for (f = 0; f < size; f++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
