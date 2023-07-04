#include <stdio.h>

/**
 * main - COMB3
 * Return: 0
 */

int main(void)
{
	int c;
	int d;
	int e;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			e = d + 1;
			while (e <= '9')
			{
				putchar(c);
				putchar(d);
				putchar(e);

				if (c < '7')
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
