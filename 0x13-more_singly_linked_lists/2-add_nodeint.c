#include "lists.h"

/**
 * add_nodeint - Add a node to a list
 * Description: Write a function that adds a new
 * node at the beginning of a listint_t list.
 * @head: listint_t **
 * @n: const int
 * Return: listint_t *
 */

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*new;

	if (!head)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
