#include "holberton.h"

/**
 *_print_rev_recursion - function that prints a string in reverse
 *@s: pointer to the address of the string
 *Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')   /* Base case */
	{
		return;
	}
	if (s[n] != '\0')
	{
		_print_rev_recursion(&s[n + 1]);
		_putchar(s[n]);
		n++;
	}
}
