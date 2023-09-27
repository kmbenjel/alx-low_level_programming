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

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	free_listint2(head);
	return (data);
}
