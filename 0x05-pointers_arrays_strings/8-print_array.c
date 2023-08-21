#include "main.h"
#include <stdio.h>

/**
 * print_array - Print integer array
 * Description: Write a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: int*
 * @n: int
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
		return;
	while (i < n && a[i])
	{
		printf("%d", a[i]);
		if (i == n - 1)
			printf("\n");
		else
			printf(", ");
		i++;
	}
}
