#include "lists.h"

/**
 * listint_len - Linked list element count
 * Description: Write a function that returns the
 * number of elements in a linked listint_t list.
 * @h: const listint_t
 * Return: element count
 */

	size_t
	listint_len(const listint_t *h)
{
	int	count;

	count = 0;
	while (1)
	{
		if (h)
		{
			count++;
			h = h->next;
		}
		else
			return (count);
	}
}
