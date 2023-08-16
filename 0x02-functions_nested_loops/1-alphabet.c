#include "main.h"

/**
 * print_alphabet - Print the Alphabet
 * Description: a program to print the Alphabet
 * Return: always 0
 */

void print_alphabet(void)
{
	int c;

	c = 'a' - 1;
	while (++c <= 'z')
		_putchar(c);
	_putchar('\n');
}
