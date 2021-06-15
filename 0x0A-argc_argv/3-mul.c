#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: count of arguments supplied to the program
 *@argv: array of pointer to char type
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc == 3)
	{
		for (; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
