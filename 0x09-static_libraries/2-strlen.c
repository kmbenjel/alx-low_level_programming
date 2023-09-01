#include "main.h"

/**
 * _strlen - String Length
 * Description: Write a function that returns
 * the length of a string
 * @s: a char*
 * Return: an int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
