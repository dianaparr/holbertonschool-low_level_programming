#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array arguments passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x = 0;   /* argv position 1 */
	int x2 = 0;  /* argv position 3 */
	int o;   /* result of the operation */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	x2 = atoi(argv[3]);
	if (*argv[2] == '/' || *argv[2] == '%')
	{
		if (x2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	o = (*get_op_func(argv[2]))(x, x2);
	printf("%d\n", o);
	return (0);
}
