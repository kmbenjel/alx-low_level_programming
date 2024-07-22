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
	int			i;
	listint_t	*node;
	listint_t	*prev_node;

	i = 0;
	node = list;
	prev_node = list;
	step = sqrt(size);
	if (!list || size == 0)
		return (NULL);
	while (node->next && node->n < value)
	{
		prev_node = node;
		for (i = 0; i < step && node->next; i++)
			node = node->next;
		printf("Value checked array[%d] = [%d]\n", (int)node->index, node->n);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)prev_node->index,
		(int)node->index);
	node = prev_node;
	while (node && node->n < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)node->index, node->n);
		node = node->next;
	}
	if (node && node->n == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)node->index, node->n);
		return (node);
	}
	return (NULL);
}
