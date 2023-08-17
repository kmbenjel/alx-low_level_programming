#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fib4
 * Description: Write a program that finds and prints the first
 * 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
 * Return: 0
 */



int main(void)
{
	size_t i;
	size_t c;
	size_t next;
	size_t temp;

	i = 0;
	next = 1;
	c = 0;
	temp = 0;

	while (c < 97)
	{
		if ((i + next) / 1000000000000)
			printf("%ld", (i + next) / 1000000000000);
		printf("%ld, ", (i + next) % 1000000000000);
		temp = i;
		i = next;
		next = temp + next;
		c++;
	}
	if ((i + next) / 1000000000000)
		printf("%ld", (i + next) / 1000000000000);
	printf("%ld\n", (i + next) % 1000000000000);
	return (0);
}
