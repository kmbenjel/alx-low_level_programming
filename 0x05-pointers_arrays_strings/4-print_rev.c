#include "main.h"

/**
 * print_rev - print reverse string
 * Description: Prints a reversed string followed by a new line
 * @s: a string
 */


void print_rev(char *s)
{
	int i = _strlen(s);

	while (s[--i])
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
