#include "holberton.h"

/**
 *puts_half - prints a string
 *@str: string for print
 *Return: Always 0.
 */

void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	if (len % 2 == 0)
	{
		for (len = len / 2; str[len] != '\0'; len++)
		{
			_putchar(str[len]);
		}
	}
	else if (len % 2 != 0)
	{
		len++;
		for (len = len / 2; str[len] != '\0'; len++)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
