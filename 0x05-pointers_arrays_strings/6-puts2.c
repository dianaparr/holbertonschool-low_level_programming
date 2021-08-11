#include "holberton.h"

/**
 *puts2 - prints a string
 *@str: string for print
 *Return: Always 0.
 */

void puts2(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
