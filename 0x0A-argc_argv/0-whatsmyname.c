#include <stdio.h>

/**
 *main - entry point
 *@argc: count of arguments supplied to the program
 *@argv: array of pointer to char type
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
