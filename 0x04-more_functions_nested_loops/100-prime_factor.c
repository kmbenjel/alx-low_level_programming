#include "main.h"

/**
 * main - Prime Factor
 * Description: Write a program that finds and prints the
 * largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0;
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2, largest_prime;

	while (n)
	{
		if (n % div != 0)
			div++;
		else
		{
			largest_prime = n;
			if (n / div == 1)
			{
				printf("%ld\n", largest_prime);
				break;
			}
		}
		n /= div;
	}
	return (0);
}
