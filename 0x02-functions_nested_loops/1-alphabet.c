#include "holberton.h"

/**
 * print_alphabet - prints alphabet, in lowercase
 * Return: Always 0
 *
 **/

void print_alphabet(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		_putchar(alphabt);
	}
	_putchar('\n');
}
