#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int tenth;
	int unit;

	for (tenth = '0'; tenth <= '9'; tenth++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			putchar(tenth);
			putchar(unit);
			if (tenth != '9' || unit != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
