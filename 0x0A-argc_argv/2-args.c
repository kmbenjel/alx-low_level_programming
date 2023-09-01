#include "main.h"

/**
 * main - Print Arguments
 * Description - Above
 * @ac: int
 * @av: char**
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j;

	if (!ac)
		return (0);

	for (i = 0; av[i]; i++)
	{
		j = 0;
		while (av[i][j])
		{
			_putchar(av[i][j]);
			j++;
		}
		_putchar('\n');
	}
	return (0);
}
