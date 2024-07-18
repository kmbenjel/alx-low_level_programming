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
	if (!array || size == 0)
		return (-1);
	while (needle < (int)size && array[needle] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = needle;
		needle += step;
		if (prev >= (int)size)
		{
			break ;
		}
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, needle);
	while (prev < (int)size && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev == needle)
			return (-1);
		prev++;
	}
	if (prev < (int)size && array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
