#include "holberton.h"
#include "2-strlen.c"

/**
 *print_rev - prints a string
 *@s: pointer string in reverse
 *Return: Always 0.
 */

void print_rev(char *s)
{
	int x = 0;

	for (x = _strlen(s); x > 0; --x)
	{
		_putchar(s[x - 1]);
	}
	_putchar('\n');
}
