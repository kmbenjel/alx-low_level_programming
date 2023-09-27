#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a list
 * Description:Write a function that returns the nth node
 * of a listint_t linked list
 * @head: listint_t *
 * @index: unsigned int
 * Return: listint_t *
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t		*node;
	unsigned int	i;

	i = 0;
	node = head;
	while (i < index - 1)
	{
		if (!(node->next))
			return (NULL);
		node = node->next;
		i++;
	}
	return (node->next);
}
