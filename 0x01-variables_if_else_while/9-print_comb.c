#include <stdio.h>

/**
 * main - COMB
 * Return: 0
 */

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
