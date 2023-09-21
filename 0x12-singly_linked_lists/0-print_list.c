#include "lists.h"

/**
 * print_list - Print List
 * Description: Write a function that prints all the
 * elements of a list_t list.
 * @h: const list_t
 * Return: size_t
 */

size_t	print_list(const list_t *h)
{
	size_t	nodes;
	list_t	*ptr;

	ptr = (list_t *)h;
	nodes = 0;
	while (ptr)
	{
		nodes++;
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (nodes);
}
