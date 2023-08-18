#include "main.h"

/**
 * print_triangle - draw a triangle
 * Description: Write a function that prints a triangle,
 * followed by a new line.
 * @size: the size
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	y = 0;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (x < size - y)
				_putchar(' ');
			else
				_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
