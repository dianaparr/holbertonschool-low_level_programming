#include "holberton.h"

/**
 *_puts - prints a string
 *@str: pointer with string
 *Return: Always 0.
 */

void _puts(char *str)
{
	int y = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		y++;
		str++;
	}
	_putchar('\n');
}
