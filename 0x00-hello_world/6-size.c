#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	char c;
	int i;
	long int l;
	long long int n;
	float f;

	printf("Size of a char: %lu", sizeof(c));
	printf(" byte(s)\n");
	printf("Size of a int: %lu", sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", sizeof(l));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", sizeof(n));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", sizeof(f));
	return (0);
}
