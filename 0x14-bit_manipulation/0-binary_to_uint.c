#include "holberton.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: base
 *@y: power
 *Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)   /* Base case */
		return (1);
	if (y < 0)    /* Base case */
		return (-1);
	if (y == 1)   /* Base case */
		return (x);
	if (y > 1)
		return (_pow_recursion(x, y - 1) * x);
	return (0);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointing to a string
 *Return: converted number (conv)
 */
unsigned int binary_to_uint(const char *b)
{
	int i; /* iterator positions char *b */
	int l; /* last index */
	int p;
	int conv = 0;

	/* checks if b is NULL */
	if (b == NULL)
		return (0);
	/* lenght of the char b */
	i = 0;
	while (b[i] != '\0')
		i++;
	l = (i - 1);
	for (i = 0; b[i] != '\0'; i++)
	{
		/* condition if b is different of 1 or 0 */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			p = _pow_recursion(2, l);
			conv += (b[i] - '0') * p;
		}
		else if (b[i] == '0')
			conv += 0;
		l--;
	}
	return (conv);
}
