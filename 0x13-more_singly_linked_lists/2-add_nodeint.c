#include "lists.h"

/**
 * add_nodeint - Add a node to a list
 * Description: Write a function that adds a new
 * node at the beginning of a listint_t list.
 * @head: listint_t **
 * @n: const int
 * Return: listint_t
 */

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (*head);
}
