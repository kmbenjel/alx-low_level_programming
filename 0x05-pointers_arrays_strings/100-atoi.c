#include "main.h"

/**
 * space_or_sign - is space or sign
 * Description: Whether the char is a space or not
 * @c: a char
 * Return: 0 or 1
 */

static char space_or_sign(char c)
{
	char str[9] = "\t\n\v\f\r+- ";
	int i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}


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
	int i = 0, sign = 1, result = 0;

	if (!s)
		return (0);

	while (space_or_sign(s[i]))
	{
		if (s[i] == '-' && is_digit(s[i + 1]))
			sign = -1;
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



