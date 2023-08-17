#include <stdio.h>

/**
 * main - Fibonacci
 * Description: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 * Return: 0
 */


int main(void)
{
	int i;
	int c;
	int next;
	int temp;

	i = 0;
	next = 1;
	c = 0;
	temp = 0;

	while (c < 49)
	{
		printf("%d, ", i + next);
		temp = i;
		i = next;
		next = temp + next;
		c++;
	}
	printf("%d\n", i + next);
	return (0);
}
