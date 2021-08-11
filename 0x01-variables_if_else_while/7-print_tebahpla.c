#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char apr;

	for (apr = 'z'; apr >= 'a'; apr--)
	{
		putchar(apr);
	}
	putchar('\n');
	return (0);
}
