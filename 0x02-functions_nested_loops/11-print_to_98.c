#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print to 98
 * Description: Write a function that prints all natural numbers from
 * n to 98, followed by a new line
 * @n: and int
 */


void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", n);
}
