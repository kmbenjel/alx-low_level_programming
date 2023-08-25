#include "main.h"

/**
 * leet - Leet
 * Discription: Write a function that
 * encodes a string into 1337
 * @s: a string
 * Return: s
 */

char *leet(char *s)
{
	int i = 0, j = 0;

	char aeotl[6] = "aeotl";
	char leet[6] = "43071";

	while (s[i])
	{
		j = 0;
		while (aeotl[j])
		{
			if (s[i] == aeotl[j] || s[i] == aeotl[j] - 32)
				s[i] = leet[j];
			j++;
		}
		i++;
	}
	return (s);
}
