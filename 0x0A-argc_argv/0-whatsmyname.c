#include "main.h"

/**
 * main - Print Program Name
 * Description - Above
 * @ac: int
 * @av: char**
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	if (!ac)
		return (0);

	for (i = 0; av[0][i]; i++)
	{
		_putchar(av[0][i]);
	}
	_putchar('\n');
	return (0);
}
