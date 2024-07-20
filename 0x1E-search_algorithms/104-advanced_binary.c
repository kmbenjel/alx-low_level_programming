#include "search_algos.h"

/**
 * recursive_binary - Search in sorted int array
 * @array: of ints
 * @size: a number
 * @value: x
 * Return: an Integer
 */

int	recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t	mid;
	size_t	i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			printf("\n");
	}
	mid = low + (high - low) / 2;
	if (high >= low)
	{
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (recursive_binary(array, low, mid - 1, value));
		return (recursive_binary(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * advanced_binary - Search in sorted int array
 * @array: of ints
 * @size: a number
 * @value: x
 * Return: an Integer
 */

int	advanced_binary(int *array, size_t size, int value)
{
	return (recursive_binary(array, 0, size - 1, value));
}
