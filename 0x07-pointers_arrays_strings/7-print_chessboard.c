#include "holberton.h"

/**
 *print_chessboard - Function print a chessboard
 *@a: Pointer that print a chessboard
 *Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int rw, c;

	for (rw = 0; rw < 8; rw++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[rw][c]);
		}
		_putchar('\n');
	}
}
