#include "holberton.h"

/**
 *print_alphabet_x10 - prints the alphabet
 *void - Entry point
 *Return: Always 0
 *
 **/

void print_alphabet_x10(void)
{
	char alpha;
	char multi;

	for (multi = '0'; multi <= '9'; multi++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	}
}
