#include "lists.h"

/**
 * sum_listint - sum link list data
 * Description: Write a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: listint_t *
 * Return: int
 */

int	sum_listint(listint_t *head)
{
	int	sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
