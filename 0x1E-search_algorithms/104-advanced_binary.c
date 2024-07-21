#include "search_algos.h"

/**
 * recursive_binary - Search in sorted int array
 * @array: of ints
 * @low: a number
 * @high: a number
 * @value: x
 * Return: an Integer
 */

int	recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t	mid;
	size_t	i;

	if (high < low)
		return (-1);
	mid = low + (high - low) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			printf("\n");
	}
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (recursive_binary(array, low, mid, value));
	}
	if (array[mid] < value)
		return (recursive_binary(array, mid + 1, high, value));
	if (array[mid] > value)
		return (recursive_binary(array, low, mid - 1, value));
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
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
