#include "main.h"

/**
 * string_toupper - String to Uppercase
 * Description: All lowcases to uppercase
 * @s: char *
 * Return: char *s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
