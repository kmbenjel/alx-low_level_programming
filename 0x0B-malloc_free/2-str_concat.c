#include "main.h"
#include "_strlen.c"

/**
 * str_concat - Concatenate Strings
 * Description: Write a function that
 * concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: char*
 */

char	*str_concat(char *s1, char *s2)
{
	char	*conc;
	int len1, len2, i, j;

	if (s1)
		len1 = _strlen(s1);
	else
		len1 = 0;
	if (s2)
		len2 = _strlen(s2);
	else
		len2 = 0;
	conc = malloc(len1 + len2 + 1);
	i = 0;
	while (s1[i])
	{
		conc[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	conc[i] = '\0';
	return (conc);
}
