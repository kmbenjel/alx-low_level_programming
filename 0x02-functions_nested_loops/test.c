#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 3)
		printf("Sum: %d\n", add(atoi(av[1]), atoi(av[2])));
	return (0);
}
