#include <stdio.h>

/**
 * main - Prints some sentence
 *
 * return - 0 before prints the sentence
 */

int main (void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf(" byte(s)\n");
	printf("Size of a int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(l));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf(" byte(s)\n");
	return (0);
}
