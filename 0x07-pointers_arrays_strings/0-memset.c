#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area with a canstant byte
 * @s: char *
 * @b: char
 * @n: unsigned
 * Return: char *
 **/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
