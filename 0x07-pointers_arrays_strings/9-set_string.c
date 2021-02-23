#include "holberton.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to pointer type char
 *@to: pointer type char, take value the pointer
 *Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
