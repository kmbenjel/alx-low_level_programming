#include "main.h"

/**
 * is_digit - Is digit
 * Description: Is digit
 * @c: a char
 * Return: 0 or 1
 */

static char is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * _atoi - ASCII to  Int
 * Description: Reproduce the behavior of atoi
 * function of the strandard C library
 * @s: char *
 * Return: an int
 */

int _atoi(char *s)
{
	unsigned int i = 0;
	int sign = 1, result = 0;

	if (!s)
		return (0);

	while (s[i] && !is_digit(s[i]))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] == '0')
		i++;

	while (is_digit(s[i]))
	{
		result *= 10;
		result += s[i] - 48;
		i++;
	}
	return (result * sign);
}

