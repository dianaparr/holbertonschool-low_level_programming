#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number in base 10
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* which recursion */
	if (n > 1)
		/* scrolls the number to the right */
		print_binary(n >> 1);
	_putchar((n & 1) + '0'); /* put the last number */
}
