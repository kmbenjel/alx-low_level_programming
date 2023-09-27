#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end of a list
 * Description: Write a function that adds a new
 * node at the end of a listint_t list.
 * @head: listint_t **
 * @n: const int
 * Return: listint_t
 */

listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t	*current;

	if (!head)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		free(new);
		return (*head);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	free(new);
	return (current->next);
}
