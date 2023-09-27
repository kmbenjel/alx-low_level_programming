#include "lists.h"

/**
 * print_listint - Print list elements
 * Description: Write a function that prints all
 * the elements of a listint_t list.
 * @h: a list
 * Return: The number of nodes.
 */

size_t	print_listint(const listint_t *h)
{
	int	count;

	count = 0;
	while (1)
	{
		if (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
		else
			return (count);
	}
}
