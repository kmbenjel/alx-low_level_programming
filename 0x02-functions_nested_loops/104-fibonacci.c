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
	unsigned int long next;
	unsigned int long temp;
	int c;

	i = 0;
	next = 1;
	c = 0;
	temp = 0;

	while (c < 97)
	{
		printf("%lu, ", i + next);
		temp = i;
		i = next;
		next = temp + next;
		c++;
	}
	printf("%lu\n", i + next);
	return (0);
}
