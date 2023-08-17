#include "main.h"

/**
 * times_table - 9 times table
 * Description: Write a function that prints the 9
 * times table, starting with 0.
 */


void times_table(void)
{
	int r;
	int c;
	int p;

	r = 0;
	c = 0;
	p = 0;

	while (r < 10)
	{
		c = 0;
		while (c < 10)
		{
			p = r * c;
			if (c)
			{
				if (p < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (p < 10)
			{
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if (c != 9)
				_putchar(',');
			if (c == 9)
				_putchar('\n');
			c++;
		}
		r++;
	}

}
