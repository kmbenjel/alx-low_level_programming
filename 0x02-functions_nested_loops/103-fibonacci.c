#include <stdio.h>

/**
 * main - Even Liber Abbaci
 * Description: By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line.
 * Return: 0
 */


int main(void)
{
	unsigned int long i;
	unsigned int long c;
	unsigned int long next;
	unsigned int long temp;
	unsigned int long sum;

	i = 0;
	next = 1;
	c = 0;
	temp = 0;
	sum = 0;

	while (c < 49)
	{
		if ((i + next) % 2 == 0 && (i + next <= 4000000))
			sum += i + next;
		temp = i;
		i = next;
		next = temp + next;
		c++;
	}
	printf("%ld\n", sum);
	return (0);
}
