#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print the second half of a string
 * Description: Write a function that prints half of
 * a string, followed by a new line.
 * @str: a string
 */


void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i > _strlen(str) / 2 - 1 )
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
