#include "lists.h"

/**
 * free_listint - free a list
 * Description: Write a function that frees a listint_t list
 * @head: listint_t *
 */

void	free_listint(listint_t *head)
{
	listint_t	*current;

	current = head;

	while (current)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
