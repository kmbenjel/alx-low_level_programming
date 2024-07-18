#include "search_algos.h"

int	interpolation_search_recursive(int *array, size_t low, size_t high,
		int value);

/**
 * interpolation_search - Interpolation Search
 * @array: int*
 * @size: size_t
 * @value: int
 * Return: int
 */

int	interpolation_search(int *array, size_t size, int value)
{
	size_t	low;
	size_t	high;

	if (size == 0 || !array)
		return (-1);
	low = 0;
	high = size - 1;
	return (interpolation_search_recursive(array, low, high, value));
}

/**
 * interpolation_search_recursive - Interpolation Search Recursive
 * @array: int*
 * @low: size_t
 * @high: size_t
 * @value: int
 * Return: int
 */

int	interpolation_search_recursive(int *array, size_t low, size_t high,
		int value)
{
	size_t	pos;

	pos = 0;
	if (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			return (interpolation_search_recursive(array, pos + 1, high,
					value));
		}
		if (array[pos] > value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			return (interpolation_search_recursive(array, low, pos - 1, value));
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value
				- array[low]));
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
