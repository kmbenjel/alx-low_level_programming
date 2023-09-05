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

/**
 * _strdup - Copy a string
 * Description: Write a function that returns
 * a pointer to a newly allocated space in
 * memory, which contains a copy of the string
 * given as a parameter.
 * @str: char *;
 * Return: char
 */

char	*_strdup(char *str)
{
	char	*cp;
	int		i;

	if (!str)
		return (NULL);
	cp = malloc(_strlen(str) + 1);
	if (!cp)
		return (NULL);
	i = 0;
	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
