#include "main.h"
#include "1-swap.c"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: a string
 */


void rev_string(char *s)
{
	int i = 0;
	char temp;

	while (s[i] && i < _strlen(s) / 2)
	{
		temp = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = temp;
		i++;
	}
}
