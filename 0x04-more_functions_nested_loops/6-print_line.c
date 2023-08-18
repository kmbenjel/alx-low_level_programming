#include "main.h"

/**
 * print_line - Print Straight Line
 * Description: Write a function that draws a
 * straight line in the terminal
 * @n: an int
 */


void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
