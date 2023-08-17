#include <stdio.h>

/**
 * main - Fib4
 * Description: Write a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
 * Return: 0
 */



int main(void)
{
	unsigned int long i;
	unsigned int long c;
	unsigned int long next;
	unsigned int long temp;

	i = 0;
	next = 1;
	c = 0;
	temp = 0;

	while (c < 90)
	{
		printf("%lld, ", i + next);
		temp = i;
		i = next;
		next = temp + next;
		c++;
	}
	printf("%lld\n", i + next);
	return (0);
}
