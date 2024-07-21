#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Search for value
 * @list: head
 * @size: size_t
 * @value: int
 * Return: int
 */

listint_t	*jump_list(listint_t *list, size_t size, int value)
{
	int			step;
	int			prev;
	listint_t	*node;
	listint_t	*prev_node;

	prev = 0;
	node = list;
	prev_node = list;
	;
	prev = 0;
	step = sqrt(size);
	if (!list || size == 0)
		return (NULL);
	while (node->next && node->n < value)
	{
		prev_node = node;
		for (prev = 0; prev < step; prev++)
		{
			if (!node->next)
			{
				break ;
			}
			node = node->next;
		}
		printf("Value checked array[%d] = [%d]\n", prev, node->n);
	}
	printf("Value checked array[%d] = [%d]\n", prev, (list + prev)->n);
	printf("Value found between indexes [%d] and [%d]\n", prev, needle);
	while (prev < (int)size && (list + prev)->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, (list + prev)->n);
		if (prev == needle)
			return (NULL);
		prev++;
	}
	if (prev < (int)size && (list + prev)->n == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, (list + prev)->n);
		return (list + prev);
	}
	return (NULL);
}
