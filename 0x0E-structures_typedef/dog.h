#ifndef DOG_H
# define DOG_H

/**
 * struct dog - Dog
 * @name: char
 * @age: float
 * @owner: char
 * Description: Dog properties
 */

typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
}			dog;

void		init_dog(struct dog *d, char *name, float age, char *owner);
void		print_dog(struct dog *d);

#endif
