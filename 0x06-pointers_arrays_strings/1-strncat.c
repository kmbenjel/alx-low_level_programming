#include "main.h"

/**
 * _strncat - concat strings
 * Description: Write a function that concatenate
 * two strings, copy at most n chars
 * @dest: dest
 * @src: src
 * @n: how many chars to copy from src
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] && i < n + 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
