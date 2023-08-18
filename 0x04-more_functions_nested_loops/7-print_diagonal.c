#include "main.h"

/**
 * print_diagonal - Print Diagonal
 * Description: Write a function that draws a
 * diagonal line on the terminal
 * @n: an int
 */

void print_diagonal(int n)
{
	int i, j;

	j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (j < n)
	{
		i = 0;
		while (i < j)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
}
