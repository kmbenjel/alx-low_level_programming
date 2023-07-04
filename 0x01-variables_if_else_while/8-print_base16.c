#include <stdio.h>

/**
 * main - Alphabet
 * Return: 0
 */

int main(void)
{
	char *all = "0123456789abcdef";
	int i;

	i = 0;
	while (i < 16)
	{
		putchar(all[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
