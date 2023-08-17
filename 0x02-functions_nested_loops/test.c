#include "main.h"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		print_to_98(atoi(av[1]));
	return (0);
}
