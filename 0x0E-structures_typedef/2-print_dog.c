#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print Dog
 * Description: Pringt dog properties
 * @d: struct dog
 */

void	print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
