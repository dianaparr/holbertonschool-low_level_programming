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
	int i = 1, add_num = 0;
	int c;

	for (; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if ((argv[i][c]) < 48 || (argv[i][c]) > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		add_num = add_num + atoi(argv[i]);
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", add_num);
	return (0);
}
