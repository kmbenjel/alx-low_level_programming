#include "main.h"

/**
 * main - Argument Count
 * Description - Above
 * @ac: int
 * @av: char**
 * Return: 0
 */

int main(int ac, char **av)
{
	if (!ac || !av)
		return (0);

	print_number(ac - 1);
	_putchar('\n');
	return (0);
}

/**
 * print_number - Print an Int
 * Description: Write a function that prints an integer
 * @n: an integer
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 10)
			print_number(-n / 10);
		_putchar(-(n % 10) + '0');
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}
