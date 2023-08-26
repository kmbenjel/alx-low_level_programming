#include "main.h"

/**
 * translate - Translate
 * Description: Encrypts a char using rot13
 * @c: a char
 * Return: a char
 */

static char translate(char c)
{
	char in[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (in[i])
	{
		if (c == in[i])
			return (out[i]);
		i++;
	}
	return (c);
}


/**
 * rot13 - Rot 13 encoding
 * Description: Write a function that encodes a
 * string using rot13
 * @s: a string
 * Return: char *
 */


char *rot13(char *s)
{
	int i = 0;


	while (s[i])
	{
		s[i] = translate(s[i]);
		i++;
	}
	return (s);
}
