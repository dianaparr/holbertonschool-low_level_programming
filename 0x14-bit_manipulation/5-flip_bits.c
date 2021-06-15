#include "holberton.h"

/**
 *flip_bits - returns the number of bits would need to flip
 *@n: an number
 *@m: an number to flip n to
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number_bits = 0;
	unsigned long int op_xor = n ^ m; /* operation XOR */

	for (; op_xor > 0; number_bits++)
	{
		op_xor &= (op_xor - 1);
	}
	return (number_bits);
}
