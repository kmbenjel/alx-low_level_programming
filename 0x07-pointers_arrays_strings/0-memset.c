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
	char	*ptr;

	ptr = s;
	for (unsigned int i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	*ptr = '\0';
	return (s);
}
