#include "main.h"

/**
 * _memcpy - Copy a memory area
 * @dest: the dest
 * @src: the source
 * @n: and unsigned int
 * Return: char *
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
