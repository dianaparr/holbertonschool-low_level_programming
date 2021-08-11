#include "holberton.h"

/**
 *print_times_table - prints the 15 times table
 *@n: number times table
 *Return: 0 always
 **/

void print_times_table(int n)
{
	int k, m, o;

	if (n < 15 && n >= 0)
	{
	for (k = 0; k <= n; k++)
	{
		for (m = 0; m <= n; m++)
		{
			o = k * m;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m == 0)
				_putchar('0');
			else if (o <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(o % 10 + '0');
			}
			else if (o >= 9 && o <= 99)
			{
				_putchar(' ');
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
			else if (o > 99)
			{
				_putchar(o / 100 + '0');
				_putchar((o / 10) % 10 + '0');
				_putchar(o % 10 + '0');
			}
			else
				_putchar((o % 10 + '0'));
		}
		_putchar(10);
	}
	}
}
