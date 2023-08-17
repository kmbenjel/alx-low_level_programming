#include <stdio.h>

/**
 * main - Fib4
 * Description: Write a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
 * Return: 0
 */



int main(void)
{
	unsigned int long i, c, n, cl, cr, nl, nr;

	c = 1;
	n = 2;

	printf("%ld", c);

	for (i = 1; i < 91; i++)
	{
		printf(", %ld", n);
		n = n + c;
		c = n - c;
	}

	cl = c / 1000000000;
	cr = c % 1000000000;
	nl = n / 1000000000;
	nr = n % 1000000000;

	for (i = 91; i < 98; i++)
	{
		printf(", %ld", nl);
		printf("%ld", nr);
		nr = nr + cr;
		cr = nr - cr;
		nl = nl + cl;
		cl = nl - cl;
	}
	printf("\n");
	return (0);
}
