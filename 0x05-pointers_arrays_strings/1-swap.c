#include "main.h"

/**
 * swap_int - Swap two ints
 * Description: Swaps the values of two ints
 * @a: a ptr
 * @b: a ptr
 * Return:
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
