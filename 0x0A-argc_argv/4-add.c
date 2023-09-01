#include "main.h"

/**
 * main - Multiply Args
 * Description - Above
 * @ac: int
 * @av: char**
 * Return: 0
 */

int main(int ac, char **av)
{
	int sum = 0, i = 0, j;
	char *error = "Error\n";

	if (!ac)
		return (0);
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!is_digit(av[i][j]))
			{
				_puts(error);
				return (1);
			}
		}
		sum += _atoi(av[i]);
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}

/**
 * _puts - Put string
 * Description: Above
 * @s: the string to put
 */

void _puts(char *s)
{
	int i = -1;
	while (s[++i])
		_putchar(s[i]);
}

/**
 * is_digit - Is digit
 * Description: Is digit
 * @c: a char
 * Return: 0 or 1
 */

int is_digit(char c)
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
	unsigned int result = 0;
	int sign = 1, i = 0;

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

/**
 * print_number - Print an Int
 * Description: Write a function that prints an integer
 * @n: an integer
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 10)
			print_number(-n / 10);
		_putchar(-(n % 10) + '0');
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}
