#include "lists.h"

/**
 * pop_listint - Pop Linstint
 * Description: Write a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)
 * @head: listint_t **
 * Return: int
 */

int	pop_listint(listint_t **head)
{
	int	data;
	listint_t *deleted;

	if (!head || !*head)
		return (0);

	deleted = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free_listint(deleted);
	return (data);
}
