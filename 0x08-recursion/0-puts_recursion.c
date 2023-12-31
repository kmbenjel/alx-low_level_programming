#include "main.h"


/**
 * _puts_recursion - Puts with recursion
 * Description: Write a function that prints
 * a string, followed by a new line.
 * @s: a string
 */

void _puts_recursion(char *s)
{
	if (!s[0])
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}

