#include "main.h"

/**
 * cap_string - Capitalize String
 * Description: Write a function that capitalizes
 * all words of a string
 * @s: char *
 * Return: char *s
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				j = i - 1;
				if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
					s[i] -= 32;
				if (s[j] == ',' || s[j] == ';' || s[j] == '.')
					s[i] -= 32;
				if (s[j] == '?' || s[j] == '!' || s[j] == '"')
					s[i] -= 32;
				if (s[j] == '{' || s[j] == '}' || s[j] == '(' || s[j] == ')')
					s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
