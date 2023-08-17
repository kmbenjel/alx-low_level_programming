#include "main.h"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		print_times_table(atoi(av[1]));
	return (0);
}
