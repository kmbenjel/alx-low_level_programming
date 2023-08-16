#include "main.h"

/**
 * print_alphabet_x10 - Print the Alphabet
 * Description: a program to print the Alphabet
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

	c = 0;
	i = -1;

	while (++i < 10)
	{
		c = 'a' - 1;
		while (++c <= 'z')
			_putchar(c);
		_putchar('\n');
	}
}
