#include "main.h"

/**
 * print_last_digit - Print Last Digit
 * @n: Integer
 * Return: a digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = (-1) * last;
	_putchar(last + 48);
	return (last);
}
