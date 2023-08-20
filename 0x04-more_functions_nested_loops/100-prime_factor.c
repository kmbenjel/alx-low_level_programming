#include "main.h"
#include "100-is_prime.c"
#include "101-print_number.c"
#include "putchar.c"

/**
 * main - Prime Factor
 * Description: Write a program that finds and prints the
 * largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0;
 */

int main(void)
{
	long num=612852475143, result=1, div=3;

	while (num > 1)
	{
		if (num % div == 0)
		{
			num /= div;
			if (is_prime(div))
				result = div;
		}
		div++;
	}
	print_number(result);
	_putchar('\n');
	return (0);
}
