#include "search_algos.h"

/**
 * binary_search - search a value in a sorted array
 * @array: int
 * @size: size_t
 * @value: int
 * Return: int
 */

int	binary_search(int *array, size_t size, int value)
{
	size_t	low;
	size_t	high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		size_t mid;
		size_t i;

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
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
