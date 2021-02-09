#include "holberton.h"

/**
 * print_alphabet: Entry point
 *
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 *
 **/

void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
