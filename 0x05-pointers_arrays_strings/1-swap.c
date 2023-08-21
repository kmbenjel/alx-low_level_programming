#include "main.h"

/**
 *
 * Description:
 *
 * Return:
 */

int swap_int(int *a, int *b)
{
	int temp = a;
	*a = *b;
	*b = temp;
}
