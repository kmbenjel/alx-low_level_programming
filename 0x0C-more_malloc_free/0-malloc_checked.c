#include "main.h"

/**
 * malloc_checked - Check malloc
 * Description - idk
 * @b: unsigned int
 * Return: 98 or a pointer
 */

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc((int)b);
	if (!ptr)
		exit(98);
	return (ptr);
}
