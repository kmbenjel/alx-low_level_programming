#include "main.h"

/**
 * _strcat - concat strings
 * Description: Write a function that concatenate
 * two strings
 * @dest: dest
 * @src: src
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
