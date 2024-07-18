#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search value in sorted array
 * @array: int*
 * @size: size_t
 * @value: int
 * Return: int
 */

int	jump_search(int *array, size_t size, int value)
{
	int	step;
	int	needle;
	int	prev;

	prev = 0;
	step = sqrt(size);
	needle = step;
	if (!array)
		return (-1);
	while (array[MIN(needle, (int)size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = needle;
		needle += step;
		if (prev >= (int)size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, needle);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev == MIN(needle, (int)size))
			return (-1);
		prev++;
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
