#include <stdio.h>

/**
 * main - COMB5
 * Return: 0
 */

int main(void)
{
	int aa = 0;
	int bb = 0;

	while (aa <= 98)
	{
		bb = aa + 1;
		while (bb <= 99)
		{
			putchar(aa / 10 + 48);
			putchar(aa % 10 + 48);
			putchar(' ');
			putchar(bb / 10 + 48);
			putchar(bb % 10 + 48);
			if (aa < 98)
			{
				putchar(',');
				putchar(' ');
			}
			bb++;
		}
		aa++;
	}
	putchar('\n');
	return (0);
}
