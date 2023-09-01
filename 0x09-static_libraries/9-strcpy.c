#include "main.h"

/**
 * _strcpy - string copy
 * Description:Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the bufferpointed to by dest
 * @dest: char*
 * @src: char*
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;

	return (dest);
}
