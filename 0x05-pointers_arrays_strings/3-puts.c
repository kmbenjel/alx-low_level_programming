#include "main.h"

/**
 * _puts - print string
 * Description: Prints a string followed by a new line
 * @str: a string
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i]);
	_putchar('\n');
}
