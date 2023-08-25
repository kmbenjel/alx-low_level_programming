#include "main.h"

/**
 * swap_int - Swap Integers
 * Description: Swaps two integers
 * @a: int*
 * @b: int*
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - Reverse Array of Ints
 * Description: Write a function that reverses
 * the content of an array of integers
 * @a: int *
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		swap_int(&a[i], &a[n - 1 - i]);
		i++;
	}
}
