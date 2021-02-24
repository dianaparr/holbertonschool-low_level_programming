#include "holberton.h"

/**
 *_puts_recursion - prints a string
 *@s: pointer to the address of the string
 *Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int n = 0;

	_putchar(s[n]);
	n++;
	if (*s != '\0')
	{
		_puts_recursion(&s[n]);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
