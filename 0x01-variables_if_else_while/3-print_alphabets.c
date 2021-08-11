#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		putchar(ap);
	}
	for (ap = 'A'; ap <= 'Z'; ap++)
	{
		putchar(ap);
	}
	putchar('\n');
	return (0);
}
