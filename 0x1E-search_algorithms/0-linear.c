#include "search_algos.h"

/**
 * linear_search - Find a value in an array
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int	linear_search(int *array, size_t size, int value)
{
	size_t	i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
