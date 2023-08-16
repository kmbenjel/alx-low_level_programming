#include "main.h"

/**
 * print_sign - Print the sign of an int
 * @n: an integer
 * Return: -1, 0, 1
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
