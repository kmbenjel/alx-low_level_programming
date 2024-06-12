#include "main.h"

/**
 * _strchr - Locate a char in a str
 * @s: a string
 * @c: a char
 * Return: char *
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (c == '\0' ? s : NULL);
	return (*s == c ? s : _strchr(s + 1, c));
}
