#include "3-calc.h"

/**
 *op_add - sum of two integer
 *@a: first int
 *@b: second int
 *Return: sum between @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of two integer
 *@a: first int
 *@b: second int
 *Return: subtraction between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of two integer
 *@a: first int
 *@b: second int
 *Return: multiplication between @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - integer division
 *@a: first int
 *@b: second int
 *Return: result of the division of @a by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - remainder of the division of integers
 *@a: first int
 *@b: second int
 *Return: result of the remainder of the division of @a by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
