#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac == 2)
	{
		print_triangle(atoi(av[1]));
	}
	return (0);
}
