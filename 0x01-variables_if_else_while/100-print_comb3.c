#include <stdio.h>

/**
 * main - COMB3
 * Return: 0
 */

int main(void)
{
	int c;
	int d;

	c = '0';
	while (c < '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			putchar(c);
			putchar(d);

			if (c < '8')
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
