#include "main.h"

/**
 * _strlen - Strlen
 * Description: String Length
 * @str: char *
 * Return: int
 */

int	_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
