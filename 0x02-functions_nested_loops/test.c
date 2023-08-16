#include "main.h"


int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (_islower(av[1][0]))
			_putchar('L');
	}
	return 0;
}
