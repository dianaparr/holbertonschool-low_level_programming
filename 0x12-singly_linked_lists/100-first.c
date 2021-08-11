#include <stdlib.h>
#include <stdio.h>

/* Function assignment to execute before main */
void __attribute__ ((constructor)) hare_tortoise(void);

/**
 *hare_tortoise - prints before the main function executed
 *
 *Return: Nothing
 */

void hare_tortoise(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
