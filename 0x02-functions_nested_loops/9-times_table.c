#include "holberton.h"

/**
 *times_table - prints the 9 times table
 *Return: 0 always
 **/

void times_table(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			o = n * m;
			if (m == 0)
			{
				_putchar('0');
			}
			else if (o <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else if (o >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
		}
		_putchar(10);
	}
}
