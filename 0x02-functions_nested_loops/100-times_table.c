#include "main.h"

/**
 * print_times_table - n times table
 * Description: Write a function that prints the n
 * times table, starting with 0.
 * @n: an int
 */


void print_times_table(int n)
{
	int r;
	int c;
	int p;

	r = 0;
	c = 0;
	p = 0;

	if (n > 15 || n < 0)
		return;
	while (r < n + 1)
	{
		c = 0;
		while (c < n + 1)
		{
			p = r * c;
			if (c)
			{
				if (p < 10)
					_putchar(' ');
				if (p < 100)
					_putchar(' ');
				_putchar(' ');
			}
			if (p >= 100)
			{
				_putchar((p / 100) + '0');
				p /= 10;
			}
			if (p >= 10)
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			if (c != n)
				_putchar(',');
			if (c == n)
				_putchar('\n');
			c++;
		}
		r++;
	}
}
