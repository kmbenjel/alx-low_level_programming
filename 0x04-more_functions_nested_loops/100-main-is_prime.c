#include "main.h"
#include "putchar.c"
#include "100-is_prime.c"
#include "101-print_number.c"

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", is_prime(atoi(av[1])));
	return 0;
}
