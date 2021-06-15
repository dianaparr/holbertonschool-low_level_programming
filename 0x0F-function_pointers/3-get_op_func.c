#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func -selects the correct function
 * @s: pointer, operation
 * Return: function pointer
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)   /* function to compare */
		{
			return (ops[i].f);   /* to all operations */
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
