#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if the value is not present in list or if list is NULL.
 */
listint_t	*jump_list(listint_t *list, size_t size, int value)
{
	size_t		i;
	size_t		step;
	size_t		prev_index;
	listint_t	*prev;
	listint_t	*current;

	i = 0;
	step = sqrt(size);
	prev_index = 0;
	prev = list;
	current = list;
	if (!list)
		return (NULL);
	while (current->next && current->index < size && current->n < value)
	{
		prev = current;
		prev_index = current->index;
		for (i = 0; i < step && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index,
			current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev_index,
		current->index);
	current = prev;
	while (current && current->index <= size && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index,
			current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	if (current && current->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index,
			current->n);
		return (current);
	}
	return (NULL);
}
