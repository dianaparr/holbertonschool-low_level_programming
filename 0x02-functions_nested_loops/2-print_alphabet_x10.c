#include "holberton.h"

/**
 * 
 * main - check the code for Holberton School students.
 *
 * print_alphabet_x10 - Entry point
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
