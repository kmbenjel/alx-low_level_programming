#include "4-free_listint.c"
#include "lists.h"

/**
 * free_listint2 - free a list
 * Description: Write a function that frees a listint_t list
 * @head: listint_t **
 */

void	free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;
	free_listint(*head);
	*head = NULL;
}
