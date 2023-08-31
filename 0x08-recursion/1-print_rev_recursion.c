#include "main.h"

/**
 * _print_rev_recursion - Print Rev
 * Description: Write a function that prints a string in reverse.
 * @s: a string
 */


void _print_rev_recursion(char *s)
{
	if (!s[0])
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}



