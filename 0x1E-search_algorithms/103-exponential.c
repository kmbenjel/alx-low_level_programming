#include "1-binary.c"
#include "search_algos.h"

/**
 * exponential_search - Search in sorted int array
 * @array: of ints
 * @size: a number
 * @value: x
 * Return: an Integer
 */

int	exponential_search(int *array, size_t size, int value)
{
	int	bound;
	int	end;

	if (!array || size == 0)
		return (-1);
	bound = 1;
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound >= (int)size)
		end = size;
	else
		end = bound + 1;
	printf("Value found between indexes [%d] and [%d]\n", bound / 2, end - 1);
	return (binary_search((array + (bound / 2)), end - bound / 2, value) + bound
		/ 2);
}
