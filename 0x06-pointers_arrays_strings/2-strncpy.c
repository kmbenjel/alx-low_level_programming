#include "main.h"

/**
 * _strncpy - Copy n chars
 * Description: The strncpy() function is similar,
 * except that at most n bytes of src are copied.
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
