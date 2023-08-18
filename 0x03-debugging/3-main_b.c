#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(int ac, char **av)
{
	if (ac == 4) {
	int month;
	int day;
	int year;

	month = atoi(av[1]);
	day = atoi(av[2]);
	year = atoi(av[3]);

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);
	}

	return (0);
}
